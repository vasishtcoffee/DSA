#include<stdio.h>
struct node{
    int data;
    struct node *next;
}*head;
void reverse(){
    struct node *current=head;
    struct node *prev=NULL , *Next=NULL;
    while(current !=NULL)
    {
        Next=current->next; //storing the next node , so the data wont be lost
        current->next=prev; //  pointing to prev, which is null
        prev=current;//move prev by one node
        current=Next;//move current by one node
    }
    head=prev;
    
}