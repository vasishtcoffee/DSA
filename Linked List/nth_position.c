#include<stdio.h>
struct node{
    int data;
    struct node *next;
}*head;
void insertN(int newdata,int pos){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=newdata;
    int i;
    struct node *temp=head;//fr traversal purpose
    if(pos==1)
    {
        ptr->next=temp;
        head=ptr;
        return;
    }
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=ptr;
}
