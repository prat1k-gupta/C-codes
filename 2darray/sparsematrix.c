#include<stdio.h>
#include<string.h>
int main(){
    int row=4,col=8;
    int arr[20][20],count=0,k=0;
    int arr1[10][10];
    printf("enter number of rows: ");
    scanf("%d",&row);
    printf("enter number of columns: ");
    scanf("%d",&col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);

        }
    }
    printf("entered matrix is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
        
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
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
      if(count > ((row * col)/2))
      printf("|| Matrix is a sparse matrix || \n");
   else
      printf("|| Matrix is not sparse matrix ||\n");

    for (int i = 0; i < row; i++)
    {  
        for (int j = 0; j < col; j++)
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