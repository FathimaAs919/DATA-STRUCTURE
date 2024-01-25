#include<stdio.h>
int v,adj[10][10],s,front=-1,rear=-1,q[10],x,p,visited[10]={0,0,0,0,0,0,0,0,0,0},i,j;
int delete()
{
if(front==-1 && front>rear)
printf("Queue is empty");
else
{
x=q[front];
front++;
return x;
}
}
void insert(int item)
{
if(rear==v-1)
printf("Queue is full");
else
{
if(front==-1)
front=0;
rear++;

q[rear]=item;
}
}
void bfs(int s,int v)
{
insert(s);
visited[s]=1;
p=delete();
printf("BFS Traversal Order:");
if(p!=0)
printf("%d ",p);
while(p!=0)
{
for(i=1;i<=v;i++)
{
if(adj[p][i]==1 && visited[i]==0)
{
insert(i);
visited[i]=1;
}
}
p=delete();
if(p!=0)
printf("%d ",p);
}
}
int main()
{
printf("Enter no of vertices:");
scanf("%d",&v);

printf("Adjacensy matrix:");
for(i=1;i<=v;i++)
{
for(j=1;j<=v;j++)
scanf("%d",&adj[i][j]);
}
printf("Enter the starting vertex:");
scanf("%d",&s);
bfs(s,v);
}