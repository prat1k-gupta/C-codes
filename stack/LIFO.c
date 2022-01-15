#include<stdio.h>
int top=-1;
char stack[100],stack2[100];
void push(int n);
void pop(char stack[]);
int main(){
    char n;
    do{
    printf("enter your inputs:");
    scanf("%c",&n);
    if(n >='a' && n<='z'){
        push(n);
    }
    else{
        pop(stack);
    }
    }while(n!='x');
     for (int i = 0; i < 5; i++)
    {
        printf("elements in stack are %c\n", stack[i]);
    }
     for (int i = 0; i < 5; i++)
    {
        printf("elements in stack are %c\n", stack2[i]);
    }
    return 0;
}
void push(int n){
    top++;
    stack[top]=n;
}
void pop(char stack[]){
    int i=0;
    stack2[i]=stack[top];
    i++;
    top--;
}
