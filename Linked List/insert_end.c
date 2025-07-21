#include<stdio.h>
struct node{
    int data;
    struct node *next;
}*head;
void insert_end(int data)
{
    struct node *newNode,*temp;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    temp=head;
    while(temp!=NULL && temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=newNode;
}