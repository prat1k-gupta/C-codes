#include<stdio.h>
void funt(int x);
    int main(){
        int i=20;
        int *ptr;
        ptr = &i;
        printf("address of i id %d",ptr);
        funt(i);
    return 0;
}
void funt(int x){
    printf("the address of i is %d",&x);
}