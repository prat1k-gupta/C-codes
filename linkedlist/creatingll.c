#include<stdio.h>
#include<stdlib.h>
struct node{
    int data; 
    struct node *next;
};
int main(){
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    printf("head address is %d\n", head);
    printf("head is %d",*head);
    return 0;
}