#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
int show(struct node *ptr);
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data= 20;
    head->next= second;

    second->data= 30;
    second->next= third;

    third->data= 40;
    third->next= NULL;
    
    show(head);
    return 0;
}
int show(struct node *ptr){
    while(ptr != NULL){
        printf("%d",ptr->data);
        ptr= ptr->next;
    }
    
}