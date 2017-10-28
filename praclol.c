#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n=36,c,x;
    x=(n-1)/2;
    for(i=1;i<=10;i++)
    {
        printf("%4d",i);
    }
    printf("\n");
    for(i=1;i<=8;i++)
    {
        printf("%4d",n);
        n--;
        for(c=1;c<=8;c++)
        {
                printf(" ");

        }
        printf("*");
        printf("\n");
    }
     for(i=28;i>=19;i--)
    {
        printf("%4d",i);
    }
    return 0;
}
