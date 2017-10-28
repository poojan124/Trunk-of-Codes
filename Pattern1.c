#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,k=2,c,z=1,a,v,b=3;
    printf("1");
    for(i=1;i<=4;i++)
    {
        printf("\n");
        for(j=1;j<=1;j++)
        {
            printf("%d",k);
            k+=2;
        }
        a=z;
        for(c=1;c<=a;c++)
        {
            printf("*");
        }
        z++;
        ++z;
        for(v=1;v<=1;v++)
        {
            printf("%d",b);
            b+=2;
        }


    }

    return 0;
}
