#include<stdio.h>
#include<string.h>
int main(){
    int arr[4][8]={
        {0,0,0,2,0,0,1,0},
        {0,6,0,0,7,0,0,3},
        {0,0,0,9,0,8,0,0},
        {0,4,5,0,0,0,0,0},
        }, count=0,k=0;
    int arr1[10][10];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if(arr[i][j]==0){
                count++;
            }
            if(arr[i][j]!=0){
                k++;
            }
            
        }
        
    }

    int l=0;
    printf("no. of zeros are : %d\n",count);
    printf("no. of non zero elements are : %d\n",k);
    for (int i = 0; i < 4; i++)
    {  
        for (int j = 0; j < 8; j++)
        {   
            if(arr[i][j]!=0){
                arr1[0][l]=i+1;
                arr1[1][l]=j+1;
                arr1[2][l]=arr[i][j];
                l++;
               
            }

        }

        
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        switch(i){
            case 0:
                printf("row\t");
                break;
            case 1:
                printf("column\t");
                break;
            case 2:
                printf("value\t");
                break;
        }
        for (int j = 0; j < k; j++)
        { 
            printf("%d\t",arr1[i][j]);
        
        }
        printf("\n");
    }
    
    return 0;
}