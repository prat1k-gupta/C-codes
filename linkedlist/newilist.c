#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
//CREATE NEW
struct node * createnew(struct node *h, int s);
//TRAVERSE
void traverse(struct node *ptr);
//INSERT AT BEGINNING
struct node * insertatbegin(struct node *ptr);
//INSERT AT END
void insertatend(struct node *ptr);
//INSERT AT POSITION
void insertatmid(struct node *ptr);
//DELETE FIRST NODE
struct node * deletefirstnode(struct node *ptr);
//DELETE LAST NODE 
void deletelastnode(struct node *ptr);
//GLOBAL VARIABLE
int item;
//MAIN FUNCTION
int main(){
    int choice;
    struct node * head = (struct node * )malloc(sizeof(struct node));
    do{
        printf("\n 1. CREATE \n 2. TRAVERSE \n 3. INSERT AT BEGINNING\n 4. INSERT AT END\n 5. INSERT AT POSITION\n 6. DELETE FROM FRONT\n 7. DELETE FROM END\n 8.EXIT\n\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("enter size of list: ");
            int size;
            scanf("%d",&size);
            //CALLING CREATE NEW FUNCTION
            createnew(head,size);
            break;
        case 2:
            traverse(head);
            break;
        case 3:
            head = insertatbegin(head);
            break;
        case 4:
            insertatend(head);
            break;
        case 5:
            insertatmid(head);
            break;
        case 6: 
            head = deletefirstnode(head);
            break;
        case 7:
            deletelastnode(head);
            break;
        case 8:
            break;
        default:
            printf("enter a valid choice!!");
            break;
        }
    }while(choice!=8);
    return 0;
}
struct node * createnew(struct node *h, int s){

    printf("enter the item 1: ");
    scanf("%d",&item);
    h->data=item;
    h->next = NULL;

    struct node *current;
    current = h;

    for (int i = 2; i <= s; i++)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        printf("enter the item %d: ",i);
        scanf("%d",&item);
        temp->data = item;
        temp->next = NULL;

        current->next = temp;
        current= current->next;
    }
}
struct node * insertatbegin(struct node *ptr){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data : ");
    scanf("%d",&item);
    newnode->data = item;
    newnode->next = ptr;
    return newnode;

}
void traverse(struct node *ptr){
    printf("\n");
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insertatend(struct node *ptr){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data : ");
    scanf("%d",&item);
    newnode->data = item;
    newnode->next = NULL;
    while((ptr->next)!=NULL){
        ptr =ptr->next;
    }
    ptr->next = newnode;
}
void insertatmid(struct node *ptr){
    int index; //2
    printf("enter the position you want to add the node to: ");
    scanf("%d",&index);
    printf("enter the data: ");
    scanf("%d",&item);
    struct node * newnode= (struct node * )malloc(sizeof(struct node));
    newnode->data = item;
    
    int i=0;
    while(i<index-1){
        ptr = ptr->next;
        i++;
    }
    newnode->next= ptr->next;
    ptr->next = newnode;
    
}
struct node * deletefirstnode(struct node *ptr){
    ptr = ptr->next;
    return ptr;
}
void deletelastnode(struct node *ptr){
    struct node *nxt;
    nxt = ptr->next;
    while(nxt->next != NULL){
        ptr=ptr->next;
        nxt= nxt->next;
    }
    ptr->next = NULL;
}