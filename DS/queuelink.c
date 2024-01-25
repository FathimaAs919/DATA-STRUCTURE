#include<stdio.h>
#include<stdlib.h>
int count=0,pos,i;
struct node
{
int data;
struct node *next;
}*new,*head=NULL,*h,*f,*l,*sl,*p;
void create()
{
int dt;
new=(struct node*)malloc(sizeof(struct node));
printf("Enter data:");
scanf("%d",&dt);
new->data=dt;
new->next=NULL;
}

void display()
{
if(head==NULL)
printf("List is empty\n");
else
{
h=head;
printf("\nLinked List:");
while(h!=NULL)
{
printf("%d->",h->data);
h=h->next;
}
printf("NULL\n\n");
}
}
void ins_end()
{
create();
if(head==NULL)
head=new;
else
{
h=head;
while(h->next!=NULL)
h=h->next;
h->next=new;
}
count++;
display();
}

void del_beg()
{
if(head==NULL)
printf("\nList is empty\n");
else
{
f=head;
head=head->next;
free(f);
}
display();
}
int main()
{
int ch;
while(1)
{
printf("1.Insertion at end\n2.Deletion at beginning\n3.Display\n4.Exit\nEnter 
choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
ins_end();
break;
case 2:
del_beg();
break;
case 3:
display();
break;

case 4:
exit(0);
break;
default:
printf("Invalid Option");
break;
}
}
}

