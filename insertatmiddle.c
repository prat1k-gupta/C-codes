#include<stdio.h>
#include<stdlib.h>
struct node{
    int data; 
    struct node *next;
};
void traverse(struct node *ptr);
struct node * insertatbegin(struct node *head);
int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    head->data = 5; 
    head-> next= second;

    second->data = 6;
    second->next = NULL;

    traverse(head);
    head = insertatbegin(head);
    printf("\n");
    traverse(head);

    return 0;
}

void traverse(struct node *ptr){
    while(ptr!=NULL){
            printf("%d\t9 ",ptr->data);
            ptr = ptr->next;
    }
}
struct node *  insertatbegin(struct node *head){
    struct node *ptr = (struct node * )malloc(sizeof(struct node));
    ptr->data = 4; 
    ptr->next= head;
    return ptr;
}
