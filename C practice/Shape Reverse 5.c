#include<stdio.h>
void main()
{
    int i,j,n;
    //printf("Enter integer: ");
    //scanf("%d",&n);

    for(i=5;i>=1;i--)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

}

