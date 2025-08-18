#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void append(struct node** head_ref,int new_data)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    struct node *last=*head_ref;

    new_node->data=new_data;
    new_node->next=NULL;
    if((*head_ref)==NULL)
    {
        new_node->prev=NULL;
        (*head_ref)=new_node;
        return;
    }
    while(last->next!=NULL)
        last=last->next;
    last->next=new_node;
    new_node->prev=last;
        
     
    return;
    
}
