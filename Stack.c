#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 3

void push(int stack[], int *top, int element)
{
   if((*top) >= MAXSIZE - 1 ){
           printf("Stack Overflow, Cannot insert element: %d\n",element);
           return ;
   }
   
   (*top) = (*top) + 1;
   stack[(*top)] = element;
   printf("Inserted %d\n", element);
}

void displayStack(int stack[], int *top)
{
  int i=0;
  for(i=0; i<=(*top) && i<MAXSIZE; i++)
          printf("%d ",stack[i]);

  printf("\n");
}

void pop(int stack[], int *top)
{
 if((*top) == -1)
         printf("Stack underflow, cannot do pop() operation");

 printf("\nNow poping %d\n",stack[*top]);

 (*top) = (*top) - 1;
}

int main()
{
 int top = -1;
 int stack[3];

 /*
  * Below code can be used to create stack of unknown size
  * printf("Enter the size of Stack");
  * scanf("%d",&size);
  * int *stack=(int *)malloc(size*sizeof(int));
 */

 int i=0;
 for(i=0; i < MAXSIZE ;i++)
         push(stack, &top, i+1);

 printf("\nLet's Print Stack elements:\n");
 displayStack(stack, &top);

 /*Check Stack overflow*/
 int new_element = 10;
 printf("\nLet's try Stack overflow: Current top=%d Let's Insert: %d \n", top, new_element);
 push(stack ,&top, new_element);

 printf("\nLet's Print Stack elements:");
 displayStack(stack, &top);

 printf("\nLet's check Stack pop() operation");
 pop(stack, &top);

 printf("\nLet's Print Stack elements:");
 displayStack(stack, &top);

 printf("\n");
 return 0;
}
