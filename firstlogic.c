#include<stdio.h>
void main()
{
    int n,i,j,x=1;
    printf("Enter the no.of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
                printf("%d ",x);
                x=x+1;
        }
        x=i+1;printf("\n");
    }
    
}
    
