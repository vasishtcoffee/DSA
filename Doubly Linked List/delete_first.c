#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head;
void delete_first(){
    struct node *temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
    return;
}