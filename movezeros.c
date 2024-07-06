#include<stdio.h>
void main()
{
    int i,n,a[50],s=0,temp,t;
    printf("Enter the limit : ");
    scanf("%d",&n);
    temp=n;
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
         s++;
         i=i-1;
         n=n-1;
        }
    }
    t=temp-s;
    printf("Array after zeros moved : ");
    for(i=0;i<t;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=t;i<temp;i++)
    {
        a[i]=0;
        printf("%d ",a[i]);
    }
   
   
}
