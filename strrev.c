#include<stdio.h>
#include<string.h>
#define MAX 50
void main()
{
    int i,j=0,n;
    char a[MAX],b[MAX];
    printf("Enter the string : ");
    scanf("%s",&a);
   n=strlen(a);
   for(i=n-1;i>=0;i--)
   {
    b[j]=a[i];
    j++;
   }
   printf("Reverse : %s",b);

}