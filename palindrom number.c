#include<stdio.h>
void main()
{
    int num,rev,rem,org;
    printf(" Enter any number ");
    scanf("%d",&num);
    org=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==org)
    {
        printf(" Given numebr is palindrom ");
    }
    else
    {
        printf(" Given number is not palindrome ");
    }
}