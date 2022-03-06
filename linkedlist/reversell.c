#include<stdio.h>
#include<stdlib.h>
struct node{
    int data; 
    struct node * next; 
};
int item;
void traverse(struct node * ptr);
struct node * createnew(int n);
struct node *  reverse(struct node * ptr);
//main function
int main(){
    //create ll 
    int size;
    printf("enter the number of nodes to be added: ");
    scanf("%d",&size);
    struct node * head = createnew(size);
    traverse(head);
    head = reverse(head);
    traverse(head);
    return 0;
}

//to create new linked list 
struct node * createnew(int n){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    printf("enter data in node 1: ");
    scanf("%d",&item);
    head->data = item; 
    head->next = NULL;

    struct node * current;
    current = head; 
    for (int i = 2; i <= n; i++)
    {
        struct node *newnode; 
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data in node %d: ",i);
        scanf("%d",&item);
        newnode->data = item; 
        newnode->next = NULL;

        current->next = newnode; 
        current = newnode; 
    }
    return head; 
}
//to print linked list 
void traverse(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

//reverse linked list function 
struct node *  reverse(struct node * ptr){
    struct node * prev= NULL; 
    struct node * current = ptr; 
    struct node * nxt = NULL; 
    while(current!=NULL){
        nxt = current->next;
        current->next = prev;
        prev= current;  
        current = nxt;
    } 
    return prev; 
}