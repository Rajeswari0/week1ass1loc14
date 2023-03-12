#include<stdio.h>
void main()
{
    int n,d,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        d=n%10;
        s=s+d;
        n=n/10;
    } 
    while (n!=0);
    printf("sum of digits=%d",s);
    
}