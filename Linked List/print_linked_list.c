#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;    
};
struct node *head=NULL;

void insert(int data)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node-> next=head;
    head=new_node;
}
void print_list(){
    struct node *ptr= head;
    printf("\n head ->");
    while(ptr!=NULL){
        printf(" %d -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");

}
int main()
{
    int data;
    printf("enter number of elements: ");
    int n;
  
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        insert(i);
    print_list();
    return 0;
}
