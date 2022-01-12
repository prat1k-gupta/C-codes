#include<stdio.h>

    int main(){
        int a,b,c,result;
        printf("enter 3 numbers: ");
        scanf("%d%d%d",&a,&b,&c);
        result = avg(a,b,c);
        printf("%d",result);
        return 0;
    }
    int avg(int x ,int y, int z){
        int result = (x+y+z)/3;
        return result;
    }
