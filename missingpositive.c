#include<stdio.h>
void main()
{
    int n,a[20],i,j,flag=0,t,d=0;
    printf("Enter the limit of array : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nAfter sorting : ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
    
        }
         printf("%d ",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
      if(a[i]==1)
      {
       d=1;
      }
        if(a[i]>=0 && ((a[i]+1)!=a[i+1]))
        {
            flag=1;break;
        }

    }
    if(d==0)
    printf("\n smallest integer : 1");
    else if(flag==1)
     printf("\n smallest integer : %d",a[i]+1);
    else
     printf("\n smallest integer : %d",a[n-1]+1);
}