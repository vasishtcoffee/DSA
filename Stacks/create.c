#include<stdio.h>
struct Stack{
    int top;
    unsigned capacity;  //size of stack 
    int *array;   // storing element in stack
};
struct Stack* create(unsigned capacity)
{
   struct Stack* stack=(struct stack*)malloc(sizeof(struct Stack));    //pointer to memory allocated using malloc
   stack->capacity=capacity;    //user allocates the capacity
   stack->top =-1;  // initially stack is empty 
   stack->array= (int*)malloc(stack->capacity *sizeof(int)); // creating array dynamically and creating space for capacity
   return stack;
}
