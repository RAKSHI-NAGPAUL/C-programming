#include <stdio.h>
#include<string.h>
int main() {
   char a[100],b[100];
   scanf("%s",a);
   scanf(" %s",b);
   int n1=strlen(a),i,j;
   int n2=strlen(b),count=0;
   if(n1==n2)
   {
       for(i=0;i<n1;i++)
       {
           for(j=i;j<n1;j++)
           {
               if(a[i]>a[j])
               {
                   char temp=a[i];
                   a[i]=a[j];
                   a[j]=temp;
               }
           }
           
       }
       for(i=0;i<n2;i++)
       {
           for(j=i;j<n2;j++)
           {
               if(b[i]>b[j])
               {
                   char temp=b[i];
                   b[i]=b[j];
                   b[j]=temp;
               }
           }
           
       }
       for(i=0;i<n1;i++)
       {
           if(a[i]==b[i])
           count++;
       }
       if(count==n1)
       printf("Anagram");
       else
       printf("Not an Anagram");
   }
   else
   printf("Not an Anagram");
}
