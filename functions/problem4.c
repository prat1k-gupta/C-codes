#include<stdio.h>
    void sumandavg(int *x, int *y,int *sum, int *avg);
    int main(){
        int a =20, b=30, sum , avg;
        sumandavg(&a,&b, &sum , &avg);
        printf("the sum of two numbers is %d",sum);
        printf("the avg of two numbers is %d",avg);
        printf("the value of a is %d",a);
        printf("the value of b is %d",b);

    return 0;
}
void sumandavg(int *x, int *y, int *sum, int *avg){
    *sum = *x + *y;
    *avg = *sum/2;
    *x=20;
    *y=40;
}