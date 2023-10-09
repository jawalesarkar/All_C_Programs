#include<stdio.h>
void main()
{
    int num,org,rem,sum;
    printf(" Enter any number ");
    scanf("%d",&num);
    org=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if(sum==org)
    {
        printf(" Given number is armstrong number ");
    }
    else
    {
        printf(" Given number is not armstrong number ");
    }
}
