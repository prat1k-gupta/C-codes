#include<stdio.h>
#include<conio.h>
void maximum();
 int n, max=0, arr[100];
void main(){
    printf("enter the size of array: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("element[%d]",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    maximum();
}
void maximum(){
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[j]<arr[i]){
            max= arr[i];
            j++;

        }

    }
    printf("maximum value is: %d ", max);
    
}