#include<stdio.h>
#include<string.h>
struct student{
    char name[30];
    int rollno;
    int class;
};
int main(){
    struct student id;
    strcpy(id.name,"pratik");
    id.rollno=1;
    id.class=12;
    printf("name: %s\n", id.name);
    printf("roll no : %d\n", id.rollno);
    printf("class : %d", id.class);
    

    return 0;
}