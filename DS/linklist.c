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
printf("\n\nList is empty\n\n");
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
void ins_beg()
{
create();
if(head==NULL)
head=new;
else
{
new->next=head;
head=new;
}
count++;
display();
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
void ins_pos()
{
printf("\nEnter position to insert data:");
scanf("%d",&pos);
create();
if(pos>count+1)
printf("Invalid");
else if(pos==1)
ins_beg();
else if(pos==count+1)
ins_end();
else
{
h=head;
for(i=1;i<pos-1;i++)
h=h->next;
new->next=h->next;
h->next=new;
count++;
}
display();
}
void del_beg()
{
if(head==NULL)
printf("\n\nList is empty\n\n");
else
{
f=head;
head=head->next;
free(f);
Department of Computer Applications 
Federal Institute of Science and Technology (FISAT) TM Page no 29 
display();
}
}
void del_end() 
{
 if (head == NULL) 
 printf("Empty");
else
 {
 if (head->next == NULL) 
 {
 printf("\n%d is removed from the list", head->data);
 free(head);
 head = NULL; 
 } 
 else 
 {
 sl = NULL;
 h = head;
 while (h->next != NULL) 
 {
 sl = h;
 h = h->next;
 }
 sl->next = NULL;
 printf("\n%d is removed from the list", h->data);
 free(h);
 }
 count--;
 }
 display();
}
void del_pos()
{

if(head==NULL)
printf("\n\nList is empty\n\n");
else
{
printf("\nEnter position to delete data:");
scanf("%d",&pos);
if(pos>count+1)
printf("Invalid");
else if(pos==1)
del_beg();
else if(pos==count+1)
del_end();
else
{
h=head;
for(i=1;i<pos;i++)
{
p=h;
h=h->next;
}
p->next=h->next;
free(h);
display();
}
}
}
int main()
{
int ch;
while(1)
{
printf("1.Insert at beginning\n2.Insertion at end\n3.Insertion at particular 
position\n4.Deletion at beginning\n5.Deletion at end\n6.Deletion at particular 
position\n7.Display List\n8.Exit\nEnter choice:");

scanf("%d",&ch);
switch(ch)
{
case 1:
ins_beg();
break;
case 2:
ins_end();
break;
case 3:
ins_pos();
break;
case 4:
del_beg();
break;
case 5:
del_end();
break;
case 6:
del_pos();
break;
case 7:
display();
break;
case 8:
exit(0);
break;
default:
printf("Invalid Option");
break;
}
}}