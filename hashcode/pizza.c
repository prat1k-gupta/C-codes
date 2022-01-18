#include <stdio.h>
#include <string.h>
int c,l,d,j=0,k=0,m=0,n=0;

void delete(int h, char like[h][100],int g);
void display();
char like[10][100];//{'pratik', 'sujeet'}
char dislike[10][100];
int main()
{
    printf("enter no. of clients: ");
    scanf("%d",&c);
    for (int i = 0; i < c; i++) {
        printf("for client %d\n",i+1);
        do{ 
            j=0;
            k=0;
            printf("enter the number of like ingredients: ");
            scanf("%d",&l);

            while(j<l){
                 printf("enter the ingredients you like : ");
                 scanf("%s",like[m]);
            m++;
            j++;
            }

            printf("enter the number of dislike ingredients: ");
            scanf("%d",&d);
            while(k<d){
                 printf("enter the ingredients you dislike : ");
                 scanf("%s",dislike[n]);
            n++;     
            k++;
            }
           }while(k!=d);

        }
    printf("\n");
    printf("liked ingredients : \n");
    for (int i = 0; i < m; i++) {
        printf("%s\t",like[i]);
    }
    printf("\n");
    printf("disliked ingredients: \n");
    for (int i = 0; i < n; i++) {
        printf("%s\t",dislike[i]);
    }
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (like[i]==dislike[j])
            {
                delete(l,like,i);
            }
            else if(like[i]==like[j]){
                delete(l,like,j);
            }
            
        }
    }
    display();
    return 0;
}
void delete(int h, char like[h][100],int g){
        for (int i = g; i > l ; i)
        {
        like[i]=like[i+1];
        }
    }

void diplay(){
        for (int i = 0; i > l ; i++)
        {
            printf("%s\t",like[i]);
        }
    }

