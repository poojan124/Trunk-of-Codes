#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=1;x<=5;x++)
    {
        printf("\n");
        for(y=1;y<=x;y++)
        {
            printf("*");
            for(z=1;z<=y;z++)
            {
                printf("\n*");
            }
        }
    }

    return 0;
}
