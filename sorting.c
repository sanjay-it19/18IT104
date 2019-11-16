#include<stdio.h>
void main()
{
int a[30],i,j,n,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
printf("%d\n",a[i]);
}




}
