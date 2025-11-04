#include <stdio.h>
#include<string.h>
int main() {
    char a[100];
    scanf("%s",a);
    int n=strlen(a);
    int count1=0,count=0,i;
    for(i=0;i<n;i++)
    {
        char a1=tolower(a[i]);
        if(strchr("aeiou",a1))
        count++;
        else
        count1++;
    }
    printf("Vowels %d\n",count);
    printf("Consonents %d",count1);
}
