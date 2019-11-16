#include<stdio.h>
void main()
{
char a[10]="hai";
int i,len=0;
for(i=0;a[i]!='\0';i++)
{

printf("%c",a[i]);

}
len=i-1;
for(i=len;i>=0;i--)
{


printf("%c",a[i]);

}



}




