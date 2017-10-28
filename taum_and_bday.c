#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int b,w,x,y,z;
        scanf("%lld %lld",&b,&w);
        scanf("%lld %lld %lld",&x,&y,&z);
        if(x>y)
        {
            if(y+z<x)
                x=y+z;
        }
        else
        {
            if(x+z<y)
                y=x+z;
        }
        //printf("x =%lld y= %lld\n",x,y);
        printf("%lld\n",b*x+w*y);
    }
    return 0;
}
