#include<stdio.h>
 void main()

{

int i,a[20],max,min,n;
printf("enter a number");
scanf("%d",&n);
if((n>0)&&(n<20))
{
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}

max=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}


}

}
else
{
printf("enter a valid no");

}

printf("%d",max);


}












