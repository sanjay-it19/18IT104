#include <stdio.h>
void main()
{
    int a[3][2];
    int i,j;
    for (i = 0; i < 3; i++) 
    {
        for(j = 0; j < 2; j++) 
        {
            printf("Enter the values of %d%d",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for (i = 0; i < 3; i++) 
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
}
