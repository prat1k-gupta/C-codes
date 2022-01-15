/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void reverse(int *ptr,int *jar);
int main()
{   int arr[5]={1,2,3,4,5};
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t",arr[i]);
    }
    
    reverse(&arr[0],&arr[4]);
    
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t",arr[i]);
    }
    
        
}
void reverse(int *ptr,int *jar){
    int temp;
    for (int i = 0; i<2; i++) {
        temp =*ptr;
        *ptr = *jar;
        *jar = temp;
        ptr++;
        jar--;
        
    }
}