#include<stdio.h>
int sum(int x);
    int main(){
        int n;
        printf("enter the number to get the sum : ");
        scanf("%d",&n);
        printf("sum of %d numbers is %d",n,sum(n));
    return 0;
}

int sum(int x){
    if(x==1||x==0){
        return 1;
    }
    else{
    return x + sum(x-1);}
}