#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
void createnew(struct node *ptr,int size);
void traverse(struct node *head);
int item;
int main(){
    int size;
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    printf("enter the number of node : ");
    scanf("%d",&size);
    createnew(head,size);
    traverse(head);
    return 0;
}
void createnew(struct node *ptr, int size){
    struct node * p = ptr;
    
    printf("Enter data in node 1: ");
    scanf("%d",&item);
    ptr->data = item;
    ptr->next = p;

    struct node *current;
    current = ptr;
    for (int i = 2; i <= size; i++)
    {   
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data in node %d: ",i);
        scanf("%d",&item);

        newnode->data = item;
        newnode->next = NULL;

        current->next= newnode;
        current = current->next;
    }
    current->next = p;
}
void traverse(struct node *head){
    struct node *ptr;
    ptr = head;
    if(ptr->next== head){
        printf("The required list is : \n");
        printf("%d",ptr->data);
    }
    else if(ptr->next != head){
        printf("The required list is : \n");
        printf("%d\t",ptr->data);
        ptr=ptr->next;
        while(ptr!= head){
            printf("%d\t",ptr->data);
            ptr =ptr->next;
        }
    }
}