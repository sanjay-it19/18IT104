#include<stdio.h>
void main()
{
int a[30],i,j,n;

printf("enter a number of arrays");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
printf("The output is\n");
for(i=0;i<n;i++)
{

printf("%d\n",a[i]);

}
printf("The reverse output is\n");

for(j=n-1;j>=0;j--)
{

printf("%d\n",a[j]);



}


}
