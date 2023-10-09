#include<stdio.h>
void main()
{
    int num,flag=0;
    printf(" Enter your number ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            flag++;
        }
    }
    if(flag==2)
        {
            printf(" its prime numner ");
        }
        else{
            printf(" its not prime numebr ");
        }
}
