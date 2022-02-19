#include<stdio.h>
#include<stdlib.h>
struct node { 
    int data; 
    struct node * next; 
};
struct node * reverse(struct node *head);
void traverse(struct node *ptr);
int main(){
    struct node * head; 
    struct node * second; 
    struct node * third; 
    head  = (struct node *)malloc(sizeof(struct node));
    second  = (struct node *)malloc(sizeof(struct node));
    third  = (struct node *)malloc(sizeof(struct node));
    head->data = 5; 
    head->next = second; 

    second->data = 6;
    second->next = third; 

    third->data = 7; 
    third->next = NULL;  
    traverse(head);
    printf("\n");
    head = reverse(head);
    traverse(head);
    return 0;
}
void traverse(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
}
struct node * reverse(struct node *head){
    struct node *current = head;
    struct node *prev=NULL; 
    struct node *nxt =NULL; 
    while(current!=NULL){
        nxt = current->next; 
        current->next= prev;
        prev = current; 
        current = nxt;
    }
    return prev;
}