#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node* pos_ins(struct node *head,int new_data)
{
    struct node *temp=head;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->prev=NULL;
    new->next=NULL;
    new->data=new_data;
    if(head==NULL)
    {
        
        return new;
    }
   
if (new_data <= head->data) {
    new->next = head;
    head->prev = new;
    return new;  }
    
    while(temp->next!=NULL && temp->next->data<new_data )
    {
        temp=temp->next;
    }
    new->next=temp->next;
    if (temp->next != NULL) {
        temp->next->prev = new;
    }
    
    temp->next=new;
    new->prev=temp;
    return head;
}