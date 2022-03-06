#include<stdio.h>
#include<stdlib.h>
struct node{
    int data; 
    struct node *left;  
    struct node *right;
};
void preOrder(struct node *root);
struct node * createNode(int item);

int main(){
    struct node* root = createNode(4);
    struct node* leftnode = createNode(5);
    struct node* rightnode = createNode(6);
    struct node* leftnodeleftnode = createNode(7);

    root->left= leftnode; 
    root->right= rightnode; 
    leftnode->left = leftnodeleftnode;
    preOrder(root);
    return 0; 
}
struct node * createNode(int item){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = item; 
    p->left = NULL; 
    p->right = NULL;
    return p; 
}
void preOrder(struct node *root){
    if(root!=NULL){
        printf("%d\t",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}