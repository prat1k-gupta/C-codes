#include<stdio.h>
#include<stdlib.h>
//declaration of node
struct node{
int data ;
struct node *next;
};
void traversal(struct node *ptr);
struct node * insertatfirst(struct node *head,int data);
struct node *insertatmid(struct node *head,int data, int index);
int main(){
    struct node *head = (struct node * )malloc(sizeof(struct node));
    struct node *second = (struct node * )malloc(sizeof(struct node));

    head-> data = 5; 
    head-> next = second;

    second->data = 6;
    second->next = NULL;

    traversal(head);
    printf("\n");
    head = insertatfirst(head,4);
    traversal(head);
    insertatmid(head,7,2);
    printf("\n");
    traversal(head);
    return 0;
}
void traversal(struct node *ptr){
    while(ptr!=NULL){    
    printf("%d\t",ptr->data);
    ptr = ptr->next;
    }
}
struct node *insertatfirst(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
struct node *insertatmid(struct node *head,int data, int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i=0;
    while(i!=index-1){
        p = p -> next;
        i++; 
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

}