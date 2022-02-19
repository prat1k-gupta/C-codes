#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void display();  
struct node   
{  
int val;  
struct node *next;  
};  
struct node *top;  
  
void main ()  
{  
    int choice=0;  
     printf("\n1.Push\n2.Pop\n3.Show\n4.Exit\n");     
    while(choice != 4)  
    {  
        printf("\n Enter your choice: ");        
        scanf("%d",&choice);  
        printf("\n");
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    };  
}  
}  
void push ()  
{  
    int val;  
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        printf("not able to push the element");   
    }  
    else   
    {  
        printf("Enter the value: ");  
        scanf("%d",&val);  
        if(top==NULL)  
        {         
            ptr->val = val;  
            ptr -> next = NULL;  
            top=ptr;  
        }   
        else   
        {  
            ptr->val = val;  
            ptr->next = top;  
            top=ptr;  
        }  
          
    }  
}  
  
void pop()  
{  
    int item;  
    struct node *ptr;  
    if (top == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        item = top->val;
        printf("the element popped is: %d\n",item);  
        ptr = top;  
        top = top->next;    
          
    }  
}  
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=top;  
    if(ptr == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        while(ptr!=NULL)  
        {  
            printf("%d\n",ptr->val);  
            ptr = ptr->next;  
        }  
    }  
}  