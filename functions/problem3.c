#include<stdio.h>
void tentimes(int *x);
    int main(){
        int i =20;
        printf("the value of i is %d\n",i);
        tentimes(&i);
        printf("the value of i is %d",i);

    return 0;
}
void tentimes(int *x){
    *x = 10 * *x;
}