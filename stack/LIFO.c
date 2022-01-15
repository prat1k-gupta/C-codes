#include<stdio.h>
#include<string.h>
int top=-1,l=-1,star=0,alpha=0;
char st[100];
void push(char c);
void pop(char z);
int main(){
    int j=0;
    char arr[100];
    printf("input elements");
    scanf("%[^\n]s",&arr);
    int size = strlen(arr);
    while(j<size){
        if(arr[j]>='A' && arr[j]<='Z'){
            top++;
            printf("value of top in if is %d\n",top);
        }
        else{
            printf("value of top in else is %d\n",top);
            if(arr[top]!='*'){
                pop(arr[top]);
                top++;
            }
            else{
                alpha++;
                star++;
                printf("no. of star are: %d",star);
                printf("no. of alpha are: %d",alpha);
                int temp=top;
                temp=temp-star-alpha;
                pop(arr[temp]);

            }
        }
        j++;
    }
    display();
    return 0;
}
void pop(char z){
        l++;
        st[l]=z;
        printf("pop[%c]\n",st[l]); 
}
void display(){
    for (int i = 0; i < strlen(st); i++)
    {
        printf("%c",st[i]);
    }
    
}