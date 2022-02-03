#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node*next;
};
struct Node* create_node( int data1)
{
struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
if(newnode == NULL)
{
printf("Unable to allocate memory.");
}
else{
newnode->data= data1;
newnode ->next=NULL;
return newnode;
}
}
void printlinklist(struct Node *ptr)
{
printf("Element is -\n");
while(ptr!=NULL)
{
printf(" %d", ptr -> data);
ptr= ptr -> next;
}
printf("\n");
}
void del(struct Node** ptr3, int data3)
{ struct Node* temp = *ptr3;
while(temp->next->data!=data3)
{
temp=temp-> next;
}
struct Node* todelete= temp->next;
temp->next=temp->next->next;
}
void insert (struct Node**head1,int pos1,int info1)
{
struct Node* ptr= create_node(info1);
struct Node* p= *head1;
int i=0;
while(i!=pos1-1)
{
p=p->next;
i++;
}
ptr->next=p->next;
p->next=ptr;
}
void reverselist(struct Node** ptr3)
{
struct Node*current_node=*ptr3;
struct Node*prevnode=NULL;
struct Node*nextnode;
while(current_node!=NULL)
{
nextnode=current_node->next;
current_node->next=prevnode;
prevnode=current_node;
current_node=nextnode;
}
printf("link list after reversing\n");
printlinklist(prevnode);
}
void deleteList(struct Node** head_ref)
{
struct Node* current = *head_ref;
struct Node* next;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
int main()
{ struct Node* head = NULL;
struct Node* tail = NULL;
int number1,number2,num,nodedata;
printf("Enter the data for first and second node\n");
scanf("%d\n%d", &number1,&number2);
head = create_node(number1);
tail=head;
head->next= create_node(number2);
tail=head->next;
printf("How many link list do you want to create? \n ");
scanf("%d", &num);
for(int i=2;i<num;i++)
{
printf("Enter the data for %dth node\t\n", i+1);
scanf("%d",&nodedata);
tail->next=create_node(nodedata);
tail=tail->next;
}
printf("linked list successfully created\n");
printlinklist(head);
int choice;
char ch='Y';
while(ch=='Y'||ch=='y')
{
printf("Choose what you want to do?\n");
printf("1. INSERTION\n");
printf("2. DELETION\n");
printf("3. REVERSAL\n");
printf("Enter your choice(1,2,3) - \n");
scanf("%d", &choice);
switch(choice)
{
case 1:
{ int info,pos;
printf("Link list before insertion-\n");
printlinklist(head);
printf("Enter the data you want to insert\n");
scanf("%d",&info);
printf("After which position you want to insert\n");
scanf("%d",&pos);
insert(&head,pos,info);
printf("Linklist after insertion -\n");
printlinklist(head);
break;
}
case 2:
{
int val;
printf("Link list before deletion-\n");
printlinklist(head);
printf("Enter the data you want to delete \n");
scanf("%d", &val);
del(&head,val);
printf("link list after deletion\n");
printlinklist(head);
break;
}
case 3:
{
printf("link list before reversal\n");
printlinklist(head);
reverselist(&head);
break;
}
default :
printf("Invalid number");
break;
}
printf("Do you want to continue - (Y/N)\n");
scanf(" %c", &ch);
}
deleteList(&head);
return 0;
}