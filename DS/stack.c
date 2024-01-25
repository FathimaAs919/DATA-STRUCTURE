#include<stdio.h>
#include<stdlib.h>
int top=-1,stack[5],size,n,i;
void push()
{
if(top==size-1)
printf("Stack is full\n");
else
{
printf("Enter data:");
scanf("%d",&n);
top++;
stack[top]=n;
}
}
void pop()
{
if(top==-1)
printf("\nStack is empty\n");
else
{
printf("\nPopped %d",stack[top]);
top--;

}
}
void display()
{
printf("Stack elements are:");
for(i=0;i<=top;i++)
printf("%d ",stack[i]);
}
int main()
{
int ch;
printf("Enter the size of the stack:");
scanf("%d",&size);
while(1)
{
printf("\n1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\nEnter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
break;
default:
printf("Invalid option");
}
}
}