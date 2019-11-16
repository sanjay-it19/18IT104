#include<stdio.h>
void main()
{int i,j,k,l,m;
for(i=1;i<=4;i++)
{
for(j=3;j>=i;j--)
{printf(" ");}

for(k=1;k<=i;k++)
{printf("%d",k);
}

for(l=i-1;l>0;l--)
{

printf("%d",l);


}

printf("\n");

}

}
