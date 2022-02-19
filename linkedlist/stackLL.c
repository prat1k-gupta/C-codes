#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int count = 0, item;
void traverse(struct node *ptr);
struct node * push(struct node *ptr,struct node *top);
//POP FUNCTION
void pop(struct node *ptr);
int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *top = head;
    int choice;
    do
    {   
        printf(" 1. Push\n 2. Display\n 3. POP\n 4. EXIT\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            top = push(head,top);
            break;
        case 2: 
            traverse(head);
            break;
        case 3:
            pop(head);
            break;
        case 4: 
            break;
        default:
            printf("Enter a valid choice!");
            break;
        }
    } while (choice!=4);
    return 0;
}
void traverse(struct node *ptr){
    if(ptr==NULL){
        printf("list is empty!!");
    }
    else{
         while(ptr!= NULL){
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    }
   
}
struct node * push(struct node *ptr,struct node *top){
    if (count==0){
        printf("enter the data : ");
        scanf("%d",&item);
        ptr->data = item;
        ptr->next = ptr;
        count++;
    }
    else{
        struct node * newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data: ");
        scanf("%d",&item);
        newnode->data = item;
        newnode->next = ptr;

        top->next= newnode;
        top= top->next;

    }
    return top;
}
void pop(struct node *ptr){
    struct node *nxt;
    nxt=ptr->next;

    while(nxt->next!= NULL){
        nxt= nxt->next;
        ptr = ptr->next;
    }
    ptr->next = NULL;
}