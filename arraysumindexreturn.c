#include<stdio.h>
# define MAX 50
void main()
{
    int n,i,j,k,a[MAX],target,s,flag=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the target : ");
    scanf("%d",&target);
    s=a[0];j=0;
    for(i=1;i<n;i++)
    {
        for(k=i;k<n;k++)
        {
            s=s+a[i];
            if(s==target)
            {
                flag=1;break;
            }
        }
        if(flag==1)
            break;
        else
        {
        s=a[i];
        j=i;
        }
    }
    if(flag==0)
    printf("Numbers sum not match with target ");
    else
    printf("Index : %d,%d",j,i);
}