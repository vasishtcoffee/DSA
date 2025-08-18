#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void push(struct node** head_ref,int new_data)
{
    struct node *newNode=(struct node*)malloc(sizeof(struct node));

    newNode->data=new_data;
    newNode->next=*head_ref;
    newNode->prev=NULL;
    if((*head_ref)!=NULL)
        (*head_ref)->prev=newNode;

    (*head_ref)=newNode;
    
}
