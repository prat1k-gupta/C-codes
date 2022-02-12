#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node * deleteatbegin(struct node *head);
void traversal(struct node *head);
int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    head -> data = 5; 
    head -> next = second;

    second -> data = 6; 
    second -> next = NULL;
    
    printf("traversal before head\n");
    traversal(head);
    printf("traversal after deletion\n");
    head = deleteatbegin (head);
    traversal(head);
    return 0;
}
void traversal(struct node *head){
    while(head != NULL){
        printf("%d\t",head->data);
        head = head->next;
    }
    printf("\n");
}
struct node * deleteatbegin(struct node *head){
    head = head -> next;
    return head; 
}