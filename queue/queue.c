#include<stdio.h>
int queue[100];
int front =-1;
int rear =-1;
int max=100;
void enqueue(int q[],int val);
void dequeue(int q[]);
void display(int q[]);
int main(){
    int choice; 
    printf(" 1. ENQUEUE \n 2. DEQUEUE \n 3. DISPLAY \n 4. EXIT");
    do{
         printf("\n enter a choice:");
        scanf("%d",&choice);
    
        switch (choice)
        {
        case 1:
            int value;
            printf("value to be added: ");
            scanf("%d",&value);
            enqueue(queue,value);
            break;
        case 2:
            dequeue(queue);
            break;
        case 3:
            display(queue);
            break;
        default:
            printf("enter a valid choice!!\n");
            break;
        }
    }while(choice!=4);
    return 0;
}
void enqueue(int q[],int val){
    if(rear>max-1)
        printf("queue is overflow!!\n");
    else if(rear==-1){
        front++;
        rear++;
        queue[rear]=val;
    }
    else{
        rear++;
        queue[rear]=val;
    }
}
void dequeue(int q[]){
    if(front==-1 || front>rear)
        printf("queue is underflow!!\n");
    else{
        printf("value deleted is : %d \n",queue[front]);
        front++;
    }
}
void display(int q[]){
    if(front==-1 || front>rear){
        printf("queue is empty!!\n");
    }
    else{

    for (int i = front; i <=rear; i++)
    {
        printf("%d\n",q[i]);
        }
    
    }
}