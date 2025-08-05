
#include<stdio.h>
struct node{
    int data;
    struct node *next;
}*head;
void sortedInsert(struct node* Newnode)
{
    if(head==NULL || Newnode->data<=head->data)
    {   Newnode->next = head;
        head=Newnode;
        return;
    }
    struct node *temp=head;
    while(temp->next!=NULL && temp->next->data<Newnode->data){
        temp=temp->next;
    }
    Newnode->next=temp->next;
    temp->next=Newnode;
}
