#include<stdio.h>
int main()
{
int a[10],large,small,i,size;
printf("Enter the size of array:");
scanf("%d",&size);
printf("Enter elements:");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
large=small=a[0];
for(i=0;i<size;i++)
{
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
printf("Largest in the array is %d\n",large);
printf("Smallest in the array is %d\n",small);
}