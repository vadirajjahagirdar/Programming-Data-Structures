#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5

void enqueue(int queue[], int *front, int *rear, int element)
{
  if( (*rear) == (MAXSIZE-1)){
    printf("Queue overflow: Cannot insert %d\n",element);
    return;
  }

  (*rear) = (*rear)+1;
  queue[(*rear)] = element;
}

void dequeue(int queue[], int *front, int *rear)
{
  if((*front) == -1){
    printf("Queue underflow\n");
    return;
  }
  (*front) = (*front) + 1;
}

void displayQueue(int queue[], int front, int rear)
{
  int i=0;
  for(i = front; i <= rear ; i++)
          printf("%d ",queue[i]);

  printf("\n");
}

int main()
{
  int front=0,rear=-1;
  int queue[5];
  int i=0;

  printf("\nInserting 1, 2, 3, 4, 5 in Queue\n");
  for( i = 0 ; i < 5 ; i++)
          enqueue(queue, &front, &rear, i+1);

  printf("Trying Queue Overflow\n");
  enqueue(queue, &front, &rear, i+1);

  printf("\nCurrent elements in Queue\n");
  displayQueue( queue, front, rear);

  printf("\nDe-Queue elements from Queue:\n");
  dequeue( queue, &front, &rear);

  printf("\nCurrent elements in Queue\n");
  displayQueue( queue, front, rear);

  printf("\nDe-Queue elements from Queue:\n");
  dequeue( queue, &front, &rear);

  printf("\nCurrent elements in Queue\n");
  displayQueue(queue, front, rear);
  printf("\n");

  return 0;
}
