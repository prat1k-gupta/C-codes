#include<stdio.h>

int main(){
    int arr[10][10],m,n;
    printf("enter the number of rows: ");
    scanf("%d",&m);
    printf("enter the number of columns: ");
    scanf("%d",&n);
    int i,j,sum=0, sum2=0,k=0;
    float rowsum[100],colsum[100];
    //row sum 
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
            sum =sum+arr[i][j];
        }
        rowsum[i]=sum;
        sum = 0;
        printf("\n");
    }
    //col sum 
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum =sum+arr[j][i];
        }
        colsum[i]=sum;
        sum = 0;
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {   
        for (j = 0; j < n; j++)
        {   
            printf("\t%d\t",arr[i][j]);
        }
        float rowavg=rowsum[i]/m;
        printf("avg r%d : %.1f\t",i+1,rowavg);
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
           float colavg=colsum[i]/m;
        printf("avg c%d : %.1f\t",i+1,colavg);
    }
    return 0;
}
