#include<stdio.h>
#include<stdio.h>
void main()
{
    int i;
    printf("enter a number:");
    scanf("%d",&i);
    if(i>0)
    printf("%d is POSITIVE NUMBER",i);
    else if(i<0)
    printf("%d is NEGATIVE NUMBER",i);
    else{
    printf(" zero");
    }
}