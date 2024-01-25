#include <stdio.h>
#include <stdlib.h>
int count=0,i,pos;
struct node
{
struct node*prev;
 int data;
 struct node *next;
}*new,*head=NULL,*h,*f,*l,*p;
void create()
{
int dt;
 new=(struct node*)malloc(sizeof(struct node));
 printf("Enter the data: ");
 scanf("%d",&dt);
new->data=dt;
 new->next=NULL;
 new->prev=NULL;
}

void display()
{
if(head==NULL)
 printf("\nList is empty\n\n");
 else
 {
 printf("\nLinked List:");
 printf("NULL->");
 h=head;
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
 head->prev=new;
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
 new->prev=h;
 }
 count++;
 display();
}
void ins_pos()
{
 printf("Enter the position: ");
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
 
 new->prev=h;
 new->next=h->next;
 h->next->prev=new;
 h->next=new;
 }
 count++;
 display();
}
void del_beg()
{
 if(head==NULL)
 printf("\nList is empty\n\n");
 else
 {
 f=head;
 head=head->next;
 free(f);
 head->prev=NULL;
 display();
 }
 count--;
}
void del_end()
{
 if(head==NULL)
 printf("\nList is empty\n\n");
  
else
 {
 l=head;
while(l->next!=NULL)
 l=l->next;
l->prev->next=NULL;
 free(l);
 display();
 }
 count--;
}
void del_pos()
{
 if(head==NULL)
 printf("\nList is empty\n\n");
 else
 {
 printf("Enter the position to which value is to removed: ");
 scanf("%d",&pos);
 if(pos==1)
 del_beg();
 else if(pos==count)
 del_end();
 else if(pos>count)
 printf("Invalid");
 else
 {
 l=head;
 for(i=1;i<pos;i++)
 l=l->next;
 
 
 l->prev->next=l->next;
 l->next->prev=l->prev;
 free(l);
 display();
 }
 }
 count--;
}
int main()
{
 int ch;
 while(1)
{
 printf("1.Insertion at beginning\n2.Insertion at end\n3.Insertion at particular 
position\n4.Deletion at beginning\n5.Deletion at end\n6.Deletion at particular 
position\n7.Display\n8.Exit\n");
 printf("\nEnter your choice: ");
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
 printf("Invalid entry");
 }
}
}
 