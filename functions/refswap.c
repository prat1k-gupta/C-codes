#include<stdio.h>
    void swap(int *a, int *b);
    int main(){
        int x=2, y=3;
        printf("Before swapping value of x and %d and y is %d",x,y);
        swap(&x,&y);
        printf("After swapping value of x and %d and y is %d",x,y);
    return 0;
}
void swap(int*a, int *b){
    int temp = *a;
    *a= *b;
    *b = temp;
}