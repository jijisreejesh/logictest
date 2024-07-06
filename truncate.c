#include<stdio.h>
#include<string.h>
#define MAX 50
void main()
{
    int i,s=0,n,k,d=0;
    char a[MAX],b[MAX];
    printf("Enter the string : ");
    gets(a);
   n=strlen(a);
   printf("Enter the number of words : ");
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
    if(a[i]==' ' && a[i+1]!=' ')
    {
        s++;
    }
    else if(s==k)
    break;
    else
    {
        d++;
    }  
   }
   for(i=0;i<d+s;i++)
   {
    printf("%c",a[i]);
   }

}