//100 center in use pattern

#include<stdio.h>
void main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            if(i==1)
            {
                printf("  %d ",j);
            }
            else if(j==10)
            {
                printf(" %d ",j+i-1);
            }
            else if( i==10)
            {
                printf(" %d ",29-j);
            }
            else if(j==1)
            {
                printf(" %d ",38-i);
            }
            else if(i==2)
            {
                printf(" %d ",35+j);
            }
            else if( j==9)
            {
                printf(" %d ",42+i);
            }
            else if( i==9)
            {
                printf(" %d ",60-j);
            }
            else if( j==2)
            {
                printf(" %d ",67-i);
            }
            else if( i==3)
            {
                printf(" %d ",62+j);
            }
            else if( j==8)
            {
                printf(" %d ",67+i);
            }
            else if( i==8)
            {
                printf(" %d ",83-j);
            }
            else if( j==3)
            {
                printf(" %d ",88-i);
            }
            else if( i==4)
            {
                printf(" %d ",81+j);
            }
            else if( j==7)
            {
                printf(" %d ",84+i);
            }
            else if( i==7)
            {
                printf(" %d ",98-j);
            }
            else if( j==4)
            {
                printf(" %d ",101-i);
            }
            else if( i==5)
            {
                printf(" %d ",92+j);
            }
            else if( j==6)
            {
                printf(" 99 ");
            }
            else
            {
                printf(" 100");
            }
        }
        printf("\n");
    }
}
