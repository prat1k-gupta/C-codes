#include<stdio.h>
void push(int st[]);
void pop(int st[]);
void display(int st[]);
int max=100;
int stack[100], top=-1;
int main(){
    //stack operations are push pop display
    int choice; 
    printf(" 1. PUSH \n 2. POP \n 3. Display \n 4. EXit");
    do{
         printf("\n enter a choice:");
        scanf("%d",&choice);
    
        switch (choice)
        {
        case 1:
            push(stack);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            display(stack);
            break;
        default:
            printf("enter a valid choice");
            break;
        }
    }while(choice!=4);
   
    return 0;
}
void push(int st[]){
    if(top>max-1){
        printf("stack is overflow!!\n");
    }
    else{
        int value;
        top++;
        printf("value to be added: ");
        scanf("%d",&value);
        st[top]=value;
    }

}
void pop(int st[]){
    if(top==-1){
        printf("stack is underflow!!\n");
    }
    else{
        printf("value popped is : %d\n",st[top]);
        top--;
    }

}
void display(int st[]){
    if(top==-1)
        printf("stack is empty!!\n");
    else{
     for (int i = top; i>-1; i--)
    {
        printf("%d\n",st[i]);
        }
    printf("\n");
    }

    
}
