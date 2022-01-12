#include<stdio.h>
#include<string.h>
struct student{
    char name[30];
    int rollno;
    int class;
};
int main(){
    struct student id[100];
    strcpy(id[0].name,"pratik");
    id[0].rollno=12;
    id[0].class=11;
    printf("name: %s\n", id[0].name);
    printf("roll no : %d\n", id[0].rollno);
    printf("class : %d\n \n", id[0].class);

    strcpy(id[1].name,"ritu");
    id[1].rollno=13;
    id[1].class=11;
    printf("name: %s\n", id[1].name);
    printf("roll no : %d\n", id[1].rollno);
    printf("class : %d", id[1].class);
    return 0;
}