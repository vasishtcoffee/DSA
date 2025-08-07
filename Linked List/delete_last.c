#include<stdio.h>
struct node{
    int data;
    struct node *next;
}*head;
void deletelast(){
    struct node *todelete,*secondlast;
    if(head==NULL)
        return;
    else{
        todelete=head;
        secondlast=head;
        while(todelete->next!=NULL)
        {
            secondlast=todelete;
            todelete=todelete->next;
        }
        if(todelete==head)
        {
            head=NULL;
        }
        else{
            secondlast->next=NULL;
        }
        free(todelete);
    }
}
