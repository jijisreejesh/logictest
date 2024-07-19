#include<stdio.h>
#include<stdlib.h>
void main()
{
    char s[100][100];
    int i,j,t,n,a[50];
    printf("Enter the no.of words");
    scanf("%d",&n);
   printf("Enter the word and no.of times corresponding :");
   for(i=0;i<n;i++)
   {
    scanf("%s",&s[i]);
    scanf("%d",&a[i]);
   }
   t=a[0];
   for(i=1;i<n;i++)
   {
    if(t<a[i])
    {
        t=a[i];
    }
   }
   printf("%d",t);
   printf("\nLargest occured words :");
   for(i=0;i<n;i++)
   {
    if(t==a[i])
    printf("%s  ",s[i]);
   }
}
