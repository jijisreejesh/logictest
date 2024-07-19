#include<stdio.h>
void main()
{
    int i,j,a[50][50],m;
    printf("Enter the limit : ");
    scanf("%d",&m);
    printf("Enter the 2d array");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Array is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Array in 90 degree is :\n");
    for(i=0;i<m;i++)
    {
        for(j=m-1;j>=0;j--)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
