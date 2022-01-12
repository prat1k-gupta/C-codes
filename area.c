#include<stdio.h>

int main(){
    int side;
    printf("enter the side of square: ");
    scanf("%d",&side);
    printf("the area is : %d",area(side));
    }
int area(int a){
    int result = a*a;
    return result;
}
