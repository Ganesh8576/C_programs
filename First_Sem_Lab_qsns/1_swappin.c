#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Numbers :");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swap = %d and %d",a,b);
}