#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;


void traverse(node* head)
{
    if(head==NULL)
     return;
    printf("%d",head->data);
    traverse(head->next);
    
}