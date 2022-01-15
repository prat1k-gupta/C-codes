//email verifier
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    int i=0,j=0,count=0,at=0;
    char s[100],c[]={".com"};
    printf("enter the mail id : ");
    scanf("%s",&s);
    int l= strlen(s),m=strlen(c);
    while(i<l){
        if(s[i]=='@'){
            while(m>=0){
                    if(s[l]==c[m]){
                       m--; 
                       l--;
                       count++;
                    }
                    else{
                        printf("please enter in right format \n");
                        count--;
                        break;
                    }
                }
            at++;
        }
        i++;
    }
    if(at==0 || at!=1){
        printf("enter valid mail include only 1 @ ");
    }

    else if(count==5){
        printf("email is correct");
    }
    getch();
}