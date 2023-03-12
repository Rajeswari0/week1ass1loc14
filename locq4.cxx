#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    char ch;
    printf("enter choices;");
    scanf("%c",&ch);
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case '+':
            printf("sum=%d",a+b);
            break;
        case '-':
            printf("differ=%d",a-b);
            break;
        case '*':
            printf("multiply=%d",a*b);
            break;
        case '/':
            printf("div=%d",a/b);
            break;
        default:
            printf("error");      
    }
    getch();
}