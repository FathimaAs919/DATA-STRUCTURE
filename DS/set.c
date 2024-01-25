#include<stdio.h>
#include<stdlib.h>
int main()
{
int A[11]={0,0,0,0,0,0,0,0,0,0,0};
int B[11]={0,0,0,0,0,0,0,0,0,0,0};
int s1,s2,f,i,ch;
printf("Enter size of first array:");
scanf("%d",&s1);
printf("Enter values:");
for(i=0;i<s1;i++)
{
scanf("%d",&f);
A[f]=1;
}
printf("Enter size of second array:");
scanf("%d",&s2);
printf("Enter values:");
for(i=0;i<s2;i++)
{
scanf("%d",&f);
B[f]=1;

}
printf("\nBitstring of A:");
for(i=0;i<11;i++)
printf("%d ",A[i]);
printf("\nBitstring of B:");
for(i=0;i<11;i++)
printf("%d ",B[i]);
while(1)
{
printf("\n\n1.UNION\n2.INTERSECTION\n3.COMPLEMENT\n4.EXIT\nEnter 
choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nUnion of A & B:");
for(i=0;i<11;i++)
printf("%d ",A[i]|B[i]);
break;
case 2:
printf("\nIntersection of A & B:");
for(i=0;i<11;i++)
printf("%d ",A[i]&B[i]);
break;
case 3:
printf("\nComplement of A:");
for(i=0;i<11;i++)
printf("%d ",!A[i]);
printf("\nComplement of B:");
for(i=0;i<11;i++)
printf("%d ",!B[i]);
break;

case 4:
exit(0);
break;
default:
printf("Invalid choice");
break;
}
}
printf("\n");
}