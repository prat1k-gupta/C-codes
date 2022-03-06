#include<stdio.h>
#include<stdlib.h>
struct ListNode{
    int val; 
    struct ListNode * next; 
};
int main(){
    struct ListNode *l1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *second = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *third = (struct ListNode *)malloc(sizeof(struct ListNode));
    l1 -> val = 2; 
    l1 -> next = second;

    second -> val = 4; 
    second -> next = third;

    third -> val = 3; 
    third -> next = NULL;

    struct ListNode * ptr1 = l1;  
    float place = 0.1;
    while(ptr1!=NULL){
        place = place * 10 ; 
        printf("value of place is: %d\n",place);
        ptr1 = ptr1->next; 
    }
    //place = 100
    ptr1=l1;
    int num1=0;
    while(ptr1!=NULL){
        num1 += (ptr1->val)*place;
        place = place/10;
        ptr1 = ptr1->next; 
    }
    //num1 243
    printf("%d",num1);

    return 0;
}