#include <stdio.h>
#include <stdlib.h>
#define MAX 10

 int queue[MAX];
 int front = -1, rear = -1;

 void insert_element(void);
 void delete_element(void);
 void peek(void);
 void display(void);

 int main(void)
 {
 int choice, return_value;

 do
 {
 puts("********* Main Menu *********");
 puts("[1] Insert an element");
 puts("[2] Delete an element");
 puts("[3] Peek");
 puts("[4] Display the Queue");
 puts("[5] Exit");

 printf("Enter your choice : ");
 scanf("%d", &choice);

 switch(choice)
 {
 case 1:
 insert_element();
 break;

 case 2:
 delete_element();
 break;

 case 3:
 peek();
 break;

 case 4:
 display();
 break;
 }
 }while(choice != 5);

 return 0;
 }

 void insert_element(void)
 {
 int element;

 if((front == 0 && rear == MAX - 1) || front == rear + 1)
 {
 puts("CIRCULAR QUEUE IS FULL");
 }
 else
 {
 printf("Enter an element that you want to insert in circular queue : ");
 scanf("%d", &element);
 if(front == -1 && rear == -1)
 {
 front = rear = 0;
 }
 else if(rear == MAX - 1 && front != 0)
 {
 rear = 0;
 }
 else
 {
 rear++;
 }
 queue[rear] = element;
 printf("%d is inserted in the circular queue\n", element);
 }
 }

 void delete_element(void)
 {
 int element;

 if(front == -1 && rear == -1)
 {
 puts("QUEUE IS EMPTY");
 }

 element = queue[front];
 if(front == rear)
 {
 front = rear = -1;
 }
 else
 {
 if(front == MAX - 1)
 {
 front = 0;
 }
 else
 {
 front++;
 }
 }
 printf("%d is deleted from the circular queue\n", element);
 }

 void peek(void)
 {
 int first_element;

 if(front == -1 && rear == -1)
 {
 puts("QUEUE IS EMPTY");
 }
 else
 {
 first_element = (queue[front]);
 }
 printf("%d is the first element in circular queue\n", first_element);
 }

 void display(void)
 {
int i;
 if(front == -1 && rear == -1)
 {
 puts("QUEUE IS EMPTY");
 }
 else
 {
 puts("CIRCULAR QUEUE IS");

 if(front < rear)
 {
 for(i = front; i <= rear; i++)
 {
 printf("%d ", queue[i]);
 }
 }
 else
 {
  for(i = front; i <= MAX - 1; i++)
 {
 printf("%d ", queue[i]);
 }
 for(i = 0; i <= rear; i++)
{
 printf("%d ", queue[i]);
 }
 }
 printf("\n");
 }
 }
