

#include <stdio.h>
void main()
{
    long int num, org, rem = 0, sum = 0, count, k, org1;
    printf("enterh then num");
    scanf("%ld", &num);
    org = num;
    org1 = org;
    while (org != 0)
    {
        org = org / 10;
        count++;
    }

    while (num != 0)
    {

        k = 0;
        rem = num % 10;
        k = rem;
        for (int i = 1; i < count; i++)
        {
            k = k * rem;
        }
        sum = sum + k;
        num = num / 10;
        rem = 0;
    }
    if (sum == org1)
    {
        printf("yes");
    }
    else
        printf("no5");
}
