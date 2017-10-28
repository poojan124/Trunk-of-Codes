#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    long long int n,arr[100000]={0},a,b,i,t,stop,j,c=1000000;
    scanf("%lld %lld",&n,&stop);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(t=1;t<=stop;t++)
    {
        scanf("%lld %lld",&a,&b);
        for (i = a; i <= b; i++)
        {

            if (arr[i] <= c)
            {
                c=arr[i];
            }
            else
            {
                continue;
            }

        }
    printf("%lld\n",c);
    a=0;
    b=0;
    c=1000000;
    }
    return 0;
}
