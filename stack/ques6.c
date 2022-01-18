#include<stdio.h>
#include<string.h>
int top = -1;
char s[20],stack[20],val;
void push(char c);
char pop();
int main(){
    int size;
    printf("Enter a string: ");
    scanf("%[^\n]s",s);
    size= strlen(s);
    for (int i = 0; i < size; i++)
    {
        push(s[i]);
    }
    for (int i = 0; i < size; i++)
    {
        s[i]=pop();
    }
    printf("reversed string is : %s",s);
    return 0;
}
void push(char c){
    top++;
    stack[top]=c;
}
char pop(){
    val=stack[top];
    top--;
    return val;
}
