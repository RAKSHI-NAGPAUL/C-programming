#include <stdio.h>
#include<string.h>
int main() {
   int n,i;
   scanf("%d",&n);
   int a=0,b=1;
   printf("%d ",a);
   printf("%d ",b);
   for(i=0;i<n-2;i++)
   {
       int c=a+b;
       a=b;
       b=c;
       printf("%d ",c);
   }
    
}
