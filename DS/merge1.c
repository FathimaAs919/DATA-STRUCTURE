#include<stdio.h>
int main()
{
int n1,n2,a[10],b[10],c[20],i,j;
printf("Enter size of first array:");
scanf("%d",&n1);
printf("Enter elements of first array:");
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("Enter size of second array:");
scanf("%d",&n2);
printf("Enter elements of second array:");
for(j=0;j<n2;j++)
scanf("%d",&b[j]);
printf("Elements of first array:");
for(i=0;i<n1;i++)
printf("%d ",a[i]);
printf("\nElements of second array:");
for(j=0;j<n2;j++)
printf("%d ",b[j]);
int k=0;
i=0,j=0;

while(i<n1 && j<n2)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else
{
c[k]=b[j];
j++;
k++;
}
}
while(i<n1)
{
c[k]=a[i];
i++;
k++;
}
while(j<n2)
{
c[k]=b[j];
j++;
k++;
}
int p;
printf("\nElements of Third array after sorting:");
for(p=0;p<k;p++)
printf("%d ",c[p]);
}