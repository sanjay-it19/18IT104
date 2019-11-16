#include<stdio.h>
void main()
{
int a[20],i,n;
printf("enter a number");
scanf("%d",&n);

if((n>0)&&(n<20))
{
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);


}

for(i=0;i<n;i++)
{

printf("%d\t",a[i]);

}
}
else
{
printf("enter a valid number");

}
}
