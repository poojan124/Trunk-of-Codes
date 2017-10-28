#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,c,x;
    printf("enter a no");
    scanf("%d",&n);
    x=(n-1)/2;
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n-2;i++)
    {
        printf("*");
        for(c=1;c<=n-2;c++)
        {
            if(i==x && c==x)
            {

                    printf("*");

            }
            else
            {
                printf(" ");
            }
        }
        printf("*");
        printf("\n");
    }
     for(i=1;i<=n;i++)
    {
        printf("*");
    }
    return 0;
}
