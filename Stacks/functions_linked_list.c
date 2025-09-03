#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;

void push(int val){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}
void pop()
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("stack is empty\n");
            }
    else{
        printf("item popped: %d",head->data);
        head=head->next;
        free(temp);
    }
}