#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * previous;
    struct node * next;
};
//FUNCTION TO CREATE NEW LINKED LIST 
void createnew(struct node* ptr,int size);
//FUNCTION TO INSERT AT END
void insertatend(struct node *ptr);
//FUNCTION TO TRAVERSE LINKED LIST 
void traverse(struct node *ptr);
//FUNCTION TO INSERT AT FRONT
struct node * insertatfrnt(struct node *ptr);
//FUNCTION TO INSERT AT SPECIFIED POSITION
void insertatpstn(struct node *ptr,int index);
//FUNCTION TO DELETE FROM FRONT
struct node * deletefrnt(struct node *ptr);
//FUNCTION TO DELETE FROM END
void deleteend(struct node *ptr);
//FUNCTION TO DELETE FROM SPECIFIED POSITION
void deleteatpstn(struct node *ptr,int index);
int item;
int pstn;
int main(){
    int choice;
    struct node * head = (struct node *)malloc(sizeof(struct node));
    do{
        printf("\n 1. CREATE NEW\n 2. DISPLAY\n 3. INSERT AT FRONT\n 4. INSERT AT END\n 5. INSERT AT POSITION\n 6. DELETE FROM FRONT\n 7. DELETE FROM END\n 8. DELETE FROM SPECIFIED POSITION\n 9. EXIT\n");
        printf("enter the choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            int size;
            printf("Enter the size of linked list :");
            scanf("%d",&size);
            createnew(head,size);
            break;
        case 2: 
            traverse(head);
            break;
        case 3: 
            head = insertatfrnt(head);
            break;
        case 4:
            insertatend(head);
            break;
        case 5: 
            printf("Enter the position you want to add the element : ");
            scanf("%d",&pstn);
            insertatpstn(head,pstn);
            break;
        case 6: 
            head = deletefrnt(head);
            break;
        case 7:
            deleteend(head);
            break;
        case 8: 
            printf("Enter the position you want to add the element : ");
            scanf("%d",&pstn);
            deleteatpstn(head,pstn);
            break;
        case 9: 
            break;
        default:
            printf("PLEASE ENTER THE VALIDE CHOICE!!\n");
            break;
        }
    }while(choice!=9);
    return 0;
}

//CREATING NEW LINKEDLIST
void createnew(struct node *ptr,int size){
    ptr->previous= NULL;
    printf("Enter the node 1: ");
    scanf("%d",&item);
    ptr->data = item;
    ptr->next = NULL;

    struct node * current;
    current = ptr;
    struct node * prev;
    prev = ptr;
    for (int i = 2; i <=size; i++)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the node %d: ",i);
        scanf("%d",&item);
        newnode->data = item;
        newnode->next = NULL;
        newnode->previous= NULL;

        current->next = newnode;
        current = current -> next;
        current->previous = prev;
        prev =prev->next;

    }
    
}

//INSERT AT FRONT
struct node * insertatfrnt(struct node *ptr){
    struct node *newnode = (struct node *)malloc(sizeof(struct node ));
    newnode->previous = NULL;
    newnode->next = ptr;
    printf("Enter the data : ");
    scanf("%d",&item);
    newnode->data = item;
}

//PRINT THE ELEMENTS PRESENT IN LINKED LIST 
void traverse(struct node *ptr){
    if(ptr==NULL){
        printf("List is empty ");
    }
    else{
        printf("\n");
        while(ptr!= NULL){
            printf("%d\t",ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

//INSERT AT END 
void insertatend(struct node *ptr){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    printf("Enter the data: ");
    scanf("%d",&item);
    newnode->data= item;
    newnode->next = NULL;
    newnode->previous = ptr;
    ptr->next= newnode;
}

//INSERT AT POSITION
void insertatpstn(struct node *ptr,int index){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&item);
    int i=1;
    while(i<index-1){
        ptr=ptr->next;
        i++;
    }
    newnode->data = item;
    newnode->next = ptr->next;
    ptr->next = newnode;
    newnode->previous= ptr;
}

//DELETE FROM FRONT 
struct node * deletefrnt(struct node *ptr){
    ptr=ptr->next;
    return ptr;
}

//DELETE FROM END
void deleteend(struct node *ptr){
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    printf("ptr is currently at: %d",ptr->data);
    ptr = ptr->previous;
    printf("ptr is at: %d",ptr->data);
    ptr->next= NULL;
}
//DELETE AT SPECIFIED POSITON
void deleteatpstn(struct node *ptr,int index){
    int i=1;
    while(i<index-1){
        ptr=ptr->next;
    }
    struct node *connect;
    connect = ptr;
    ptr=ptr->next;
    connect->next = ptr->next;
    ptr=ptr->next;
    ptr->previous = connect;
}