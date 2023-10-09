#include<stdio.h>
void main()
{
    int num,a,sqr,count=1;
    printf("Enter any number ");
    scanf("%d",&num);
    a=num;
    sqr=num*num;
    while(num>0)
    {
        count=count*10;
        num=num/10;
    } 
    if(sqr%count==a)
   {
     printf("Given number is automorphic");
   }
    else
   {
     printf("Given number is not automorphic");
   }
}
