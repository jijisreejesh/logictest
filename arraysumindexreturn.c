#include<stdio.h>
# define MAX 50
void main()
{
    int n,i,j,k,a[MAX],t,s,flag=0,temp=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the target : ");
    scanf("%d",&t);
    temp=a[0];
    j=0;
    for(i=1;i<n;i++)
    {
        k=i;
        while(k<n)
        {
            s=temp+a[k];
            if(s==t)
            {
                flag=1;break;
            }
            k++;
        }
        if(flag==1)
            break;
        else
        {
        temp=a[i];
        j=i;
        }
    }
    if(flag==0)
    printf("Numbers sum not match with target ");
    else
    printf("Index : %d,%d",j,k);
}