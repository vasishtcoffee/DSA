#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head;
void delete_last()
{   struct node *temp=head;
    if(head==NULL)
    {
        printf("List is empty");
        return;
    }
    if(head->next==NULL)
    {   free(head);
        head=NULL;
        return;
    }else{
        while(temp->next!=NULL)
        {
            temp=temp->next;  
                }}
    temp->prev->next=NULL;
                
            free(temp);
    
}