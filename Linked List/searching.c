#include<stdio.h>
#include<stdbool.h>
bool flag=true;
struct node
{
    int data;
    struct node *next;
}*head;
//iterative approach 
bool search(struct node* head, int target){
    struct node *current=head;
    while(current!=NULL)
    {
        if(current->data==target)
            return true;
        current=current->next;
    }
    return false;
}
//recursive
bool searchRecursive(struct node* head, int target)
{
    if(head==NULL)
        return false;
    if(head->data==target)
        return true;
    return searchRecursive(head->next,target); 
}
