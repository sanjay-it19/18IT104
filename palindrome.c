#include<stdio.h>
void main()
{
char a[10],b[10];
int i,len,j=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
printf("%c",a[i]);
}
len=i-1;
for(i=len;i>=0;i--)
{
b[j]=a[i];
j=j+1;
printf("%c",a[i]);
}
b[j]='\0';
printf("%s\t%s",a,b);
}
