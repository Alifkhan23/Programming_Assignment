#include<stdio.h>
void main()
{
    int i,j,n;
    //printf("Enter integer: ");
    //scanf("%d",&n);

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c\t",j+96);
        }
        printf("\n");
    }
}

