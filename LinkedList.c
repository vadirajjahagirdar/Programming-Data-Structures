#include <stdio.h>
#include <stdlib.h>

struct node
{
 int data;
 struct node *next;
};

struct node *head;

void insertFront(int i)
{
  struct node *nodeToInsert = (struct node*) malloc( sizeof(struct node));
  nodeToInsert->data = i;
  nodeToInsert->next = NULL;


  if(head == NULL){
        head = nodeToInsert;
  }
  else{
       nodeToInsert->next = head;
       head = nodeToInsert;
  }
}

void display()
{
 struct node *iterator = head;
 while( iterator )
 {
  printf("%d ", iterator->data);
  iterator = iterator->next;
 }

 printf("\n");
}

void insertLast(int i)
{
  struct node *nodeToInsert = (struct node*) malloc( sizeof(struct node));
  nodeToInsert->data = i;
  nodeToInsert->next = NULL;

  struct node *ptr = head;
  while(ptr->next != NULL){
    ptr = ptr->next;
  }

  ptr->next = nodeToInsert;

}

int getLength()
{
  int len=0;
  struct node *ptr = head;

  while(ptr != NULL){
    ptr = ptr->next;
    len++;
  }
  return len;
}

int searchLL(int i)
{
  int result=0;
  struct node *ptr = head;

  while(ptr != NULL){
    if(ptr->data == i)
            result = 1;
    ptr = ptr->next;
  }
  return result;
}

int main()
{
 printf("\nInserting 1, 2, 3 into LinkedList to Front of LinkedList one-by-one\n");
 int i = 0;

 for( i=0 ; i < 3 ;i++)
    insertFront(i+1);

 printf("\nLet's display LinkedList\n");
 display();

 printf("\nInserting 4, 5, 6 into LinkedList to End of LinkedList one-by-one\n");

 for(i= i ; i < 6; i++)
    insertLast(i+1);

 printf("\nLet's display LinkedList\n");
 display();

 printf("\n");

 printf("\nLet's get Length of LinkedList:\n");
 int length = getLength();
 printf("Length=%d\n", length);

 printf("\nLet's search 10 in LinkedList:\n");
 int result = searchLL(10);
 printf("Result: %d\n", result);

 printf("\nLet's search 5 in LinkedList:\n");
 result = searchLL(5);
 printf("Result: %d\n",result);

 printf("\n");

 return 0;
}
