#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node* lchild;
int data;
struct node* rchild;
}*root=NULL,*new,*p,*tp,*t;
void create()
{
int dt;
new=(struct node*)malloc(sizeof(struct node));
printf("Enter the data to the node:");
scanf("%d",&dt);
new->data=dt;
new->lchild=NULL;
new->rchild=NULL;
}
void search(struct node *root)
{
if((new->data < root->data) && (root->lchild==NULL))
root->lchild=new;

else if((new->data > root->data) && (root->rchild==NULL))
root->rchild=new;
else if((new->data < root->data) && (root->lchild!=NULL))
search(root->lchild);
else if((new->data > root->data) && (root->rchild!=NULL))
search(root->rchild);
else
printf("Invalid");
}
void insert()
{
create();
if(root==NULL)
root=new;
else
search(root);
}
void deletenode(struct node *rt)
{
//leaf node
if(rt->lchild==NULL && rt->rchild==NULL)
{
if(rt==p->lchild)
p->lchild=NULL;
else//rt is right child of p
{
p->rchild=NULL;
if(rt==root)
root=NULL;
}
free(rt);

}
else if(rt->lchild!=NULL && rt->rchild==NULL)
{
if(rt==root)
root=rt->lchild;
else if(rt==p->lchild)
p->lchild=rt->lchild;
else //rt=p->rchild
p->rchild=rt->lchild;
free(rt);
}
else if(rt->lchild==NULL && rt->rchild!=NULL)
{
if(rt==root)
root=rt->rchild;
else if(rt==p->lchild)
p->lchild=rt->rchild;
else //rt=p->rchild
p->rchild=rt->rchild;
free(rt);
}
else//rt->lchild!=NULL && rt->rchild1=NULL
{
t=rt->rchild;
tp=rt;
while(t->lchild!=NULL)
{
tp=t;
t=t->lchild;
}

rt->data=t->data;
if(rt==tp)
rt->rchild=NULL;
else
tp->lchild=NULL;
free(t);
}
}
void dsearch(struct node *rt,int v)
{
if(v<rt->data)
{
p=rt;
dsearch(rt->lchild,v);
}
else if(v>rt->data)
{
p=rt;
dsearch(rt->rchild,v);
}
else if(v==rt->data)
deletenode(rt);
else
printf("Invalid");
}
void delete()
{
int v;
printf("Enter the value of the node to be deleted:");
scanf("%d",&v); 
if(root==NULL)

printf("No value in the tree");
else
dsearch(root,v);
}
void preorder(struct node * root)
{
if(root!=NULL)
{
printf("%d ",root->data);
preorder(root->lchild);
preorder(root->rchild);
}
}
void inorder(struct node * root)
{
if(root!=NULL)
{
inorder(root->lchild);
printf("%d ",root->data);
inorder(root->rchild);
}
}
void postorder(struct node * root)
{
if(root!=NULL)
{
postorder(root->lchild);
postorder(root->rchild);
printf("%d ",root->data);
}
}

void display()
{
if(root==NULL)
printf("Tree is empty");
else
{
printf("Preorder:");
preorder(root);
printf("\n");
printf("Inorder:");
inorder(root);
printf("\n");
printf("Postorder:");
postorder(root);
}
}
int main()
{
int ch;
while(1)
{
printf("\n1.Insert a node\n2.delete a node\n3.Display\n4.Exit\nEnter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
delete();
break;

case 3:
display();
break;
case 4:
exit(0);
break;
default:
printf("Invalid");
break;
}
}
}