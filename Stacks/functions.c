#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct Stack{
    int top;
    unsigned capacity;  //size of stack 
    int *array;   // storing element in stack
};
struct Stack* create(unsigned capacity)
{
   struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));    //pointer to memory allocated using malloc
   stack->capacity=capacity;    //user allocates the capacity
   stack->top =-1;  // initially stack is empty 
   stack->array= (int*)malloc(stack->capacity *sizeof(int)); // creating array dynamically and creating space for capacity
   return stack;
}

int isFull(struct Stack* stack){
    return stack->top == stack->capacity - 1; //return true if top==capacity ,, the top will be updated to latest element to array
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1;  //initially top will be pointing to -1
}

void push(struct Stack* stack,int item){
    if(isFull(stack))
        return;  //return if stack is full
    stack->array[++stack->top]=item;  //first increment the top , so it will go above and insert the element
    printf("%d is pushed\n",item);    //item is pushed
}

int pop(struct Stack* stack){
    if(isEmpty(stack))
        return INT_MIN; // returns garbage value if it is empty
    return stack->array[stack->top--]; // just decrement the top pointer ,, the value at the actual top is not erased 
    //if push function is called again the value will be overidden
}

int peek(struct Stack* stack){
    if(isEmpty(stack))
        return INT_MIN; //return garbage value if it is empty
    return stack->array[stack->top];
}