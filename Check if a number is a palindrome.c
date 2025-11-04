#include <stdio.h>

int main() {
    int n,r,c=0,i,j;
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    int temp1=temp,arr[c],count=0,k=0;
    while(temp>0)
    {
        r=temp%10;
        arr[k++]=r;
        temp=temp/10;
    }
    for(i=0,j=c-1;i<c&& j>=0;i++,j--)
    {
        if(arr[i]==arr[j])
        count++;
    }
    if(c==count)
    printf("\npalindrome");
    else
    printf("\nNot a palindrome");
}

