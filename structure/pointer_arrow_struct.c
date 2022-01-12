#include<stdio.h>
#include<string.h>
struct student{
    char name[30];
    int rollno;
    int class;
};
int main(){
    struct student id;
    struct student *head;
    head = &id;
    strcpy(id.name,"pratik");
    head->rollno=1;
    head->class=12;
    printf("name: %s\n", head->name);
    printf("roll no : %d\n", head->rollno);
    printf("class : %d", head->class);
    return 0;
}