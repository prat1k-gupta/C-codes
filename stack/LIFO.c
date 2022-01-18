#include<stdio.h>
#include<string.h>
//EAS*Y*QUE***ST***IO*N***
int top=-1,l=0;
char st[100],st2[100],val;
void display(void);
void push(char c);
char pop();
int main(){
    char arr[100];
    printf("input elements: ");
    scanf("%[^\n]s",&arr);
    int size = strlen(arr);
    for (int j = 0; j < size; j++){
        if(arr[j]>='A' && arr[j]<='Z'){
            push(arr[j]);
        }
        else{
                st2[l]=pop();
                l++;
        }
        }
    display();
    return 0;
}
void push(char c){
    top++;
    st[top]=c;
}
char pop(){
        val=st[top];
        top--;
        return val;            
}
void display(){
    for (int i = 0; i < strlen(st2); i++)
    {
        printf("%c",st2[i]);
    } 
}