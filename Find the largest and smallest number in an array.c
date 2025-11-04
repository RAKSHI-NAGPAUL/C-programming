#include <stdio.h>

int main() {
 int n,i,j;
 scanf("%d",&n);
 int arr[n];
 for(i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
     for(j=i;j<n;j++)
     {
         if(arr[i]>arr[j])
         {
             int temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
         }
     }
 }
printf("second smallest no: %d",arr[1]);
printf("\nsecond largest no: %d",arr[n-2]);
}
