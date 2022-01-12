#include<stdio.h>
#include<string.h>
//written by me running in one go 
struct student{
    char name[30];
    int rollno;
    int class;
};
void show(struct student vid);
int main(){
    struct student id;
    struct student *head;
    head = &id;
    strcpy(id.name,"pratik");
    head->rollno=1;
    head->class=12;
    show(*head);
    
    return 0;
}
void show(struct student vid){
    printf("name: %s\n", vid.name);
    printf("roll no : %d\n", vid.rollno);
    printf("class : %d", vid.class);
}