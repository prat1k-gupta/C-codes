#include<stdio.h>
void repeat(int *p,int k,int l);
int main(){
    int arr[20];
    int n=5;
    for (int i = 0; i < n; i++)
    {
        printf("element[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                repeat(arr,j,n);

                n--;
            }
            
        }
        
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
    return 0;
}
void repeat(int *p,int k,int l){
    for (int i = k; i < l; i++)
    {
        *(p+i)=*(p+i+1);
    }
    printf("\n");
    for (int i = *p; i < l; i++)
    {   
        printf("%d\t",*(p+i));
    }
    
    
}