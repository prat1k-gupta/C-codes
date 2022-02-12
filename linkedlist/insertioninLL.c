#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traversal(struct node *ptr);
struct node * insertatbeg(struct node *head);
struct node * insertatmid(struct node *head,int index, int num);
struct node * insertatend(struct node * head, int num);
int main(){
    struct node *head;
    struct node *second;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    head -> data = 5; 
    head -> next = second; 

    second -> data = 6;
    second -> next = NULL;
    printf("TRAVERSAL\n");
    traversal(head); 
    printf("TRAVERSAL AFTER ADDING ELEMENT AT BEGINNING\n");
    head = insertatbeg(head);
    traversal(head);
    printf("TRAVERSAL AFTER ADDING ELEMENT AT MID\n");
    head = insertatmid(head,1,9);
    traversal(head);
    printf("TRAVERSAL AFTER ADDING ELEMENT AT END\n");
    head = insertatend(head,12);
    traversal(head);
    return 0;
}
void traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct node * insertatbeg(struct node *head){
    struct node * ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data= 7;
    ptr -> next = head;
    return ptr;
}
// 7 5 6 index-2
struct node * insertatmid(struct node * head,int index,int num){
    struct node *ptr = (struct node * )malloc(sizeof(struct node));
    int i=0;
    struct node *p = head;
    ptr -> data = num;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr ->next = p->next;
    p->next = ptr;
    return head;
}
struct node * insertatend(struct node * head, int num){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node *h = head;
    while((h->next)!=NULL){
        h = h->next;
    }
    ptr->data = num;
    h->next = ptr;
    ptr->next = NULL;
    return head;
}