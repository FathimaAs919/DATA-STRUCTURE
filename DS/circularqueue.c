#include<stdio.h>
int front=-1,rear=-1,size,data,queue[10],i;
void enqueue()
{
if((front==0 && rear==size-1) || (front==rear+1))
printf("Queue is full");
else
{
if(front==-1)
front=0;
printf("\nEnter data:");
scanf("%d",&data);
rear=(rear+1)%size;
queue[rear]=data;
}
}
void dequeue()
{
if(front==-1)
printf("\nQueue is empty");
else
{
printf("\nRemoved %d",queue[front]);

if(front==rear)
{
front=-1;
rear=-1;
}
else
front=(front+1)%size;
}
} 
void display()
{
printf("\nThe elements in queue are:");
if(front==-1 && rear==-1)
{
printf("Queue is empty");
}
if(front<=rear)
{
for(i=front;i<=rear;i++)
{
printf("%d ",queue[i]);
}
}
else
{
for(i=front;i<=size-1;i++)
{
printf("%d ",queue[i]);
}
for(i=0;i<=rear;i++)
printf("%d ",queue[i]);
}
}

int main()
{
int ch;
printf("Enter the size of queue:");
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
break;
}
}
}