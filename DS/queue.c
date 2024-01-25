#include<stdio.h>
#include<stdlib.h>
int n,queue[10],size,front=-1,rear=-1,i;
void enqueue()
{
if(rear==size-1)
printf("Queue is full\n");
else
{
if(front==-1)
front++;
printf("Enter element:");
scanf("%d",&n);
rear=rear+1;
queue[rear]=n;
printf("Inserted %d\n",queue[rear]);
}
}
void dequeue()
{
if(front==-1 || front>rear)
{
printf("Queue is empty\n");
}
 
else
{
printf("\nRemoved %d",queue[front]);
front++;
}
}
void display()
{
printf("The elements are:");
for(i=front;i<=rear;i++)
printf("%d ",queue[i]);
}
int main()
{
int ch;
printf("Enter size of queue:");
scanf("%d",&size);
while(1)
{
printf(" \n1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n Enter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
 
case 4:
exit(0);
break;
default:
printf("Invalid option");
break