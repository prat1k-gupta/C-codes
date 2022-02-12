#include<stdio.h>
#include<stdlib.h>
//creating a new data type with integer data and next pointer
struct node{
    int data;
    struct node * next;
};

void createnew(struct node* h, int s);
void traverse(struct node *ptr);

//MAIN FUNCTION STARTS HERE 
int main(){

    int size;
    struct node* head;
    head = (struct node * )malloc(sizeof(struct node));
    printf("enter the size of linked list: ");
    scanf("%d",&size);
    createnew(head,size);
    traverse(head);
    return 0;
}

void createnew(struct node* h, int s){
    int item;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data in node 1: ");
    scanf("%d",&item);
    h->data = item;
    h->next = newnode;
    for(int i=2; i<=s ; i++){
        struct node *temp;
        temp = (struct node * )malloc(sizeof(struct node));
        printf("enter the data in node %d: ",i);
        scanf("%d",&item);
        temp->data = item;
        temp->next = NULL;
        newnode->next = temp;
        newnode = newnode->next;
    }
}
void traverse(struct node *ptr){
    if(ptr->next=NULL){
        printf("List is empty!!");
    }
    else{
        while(ptr!=NULL){
            printf("%d\t",ptr->data);
            ptr = ptr->next;
        }
    }
}