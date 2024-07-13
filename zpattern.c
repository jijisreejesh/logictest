#include<stdio.h>
void main()
{
    int i,n,d,j,k;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    d=n-1;
    for(i=0;i<n;i++)
    {
        printf("* ");
    }
    printf("\n");
    for(k=1;k<n-1;k++)
    {
        for(i=0;i<d-1;i++)
        {
            printf("  ");
        }
        d--;
        
        printf("* ");
        
        printf("\n");
    }
     for(i=0;i<n;i++)
    {
        printf("* ");
    }
}