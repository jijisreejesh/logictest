#include<stdio.h>
void main()
{
    int n,i,a[30],x,temp;
    printf("Enter array limit : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[n-1]<9)
    {
        x=a[n-1]+1;
        a[n-1]=x;
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else if(a[n-1]>=9&&a[n-1]<100)
    {
        x=a[n-1]+1;
        a[n-1]=x/10;
        x=x%10;
        a[n]=x;
        for(i=0;i<=n;i++)
        {
            printf("%d ",a[i]);
        }  
    }
    /*else
    {
        x=a[n-1]+1;   //100
       a[n-1]=x/100;   //1
        a[n+1]=x%10;   
        x=x/10;   //0
        temp=(a[n-1])/10;   //1
        a[n]=(a[n-1])%10;    //0
        a[n-1]=temp;
        a[n+1]=x;
        for(i=0;i<=n+1;i++)
        {
             printf("%d ",a[i]);
        }  
    }*/
}