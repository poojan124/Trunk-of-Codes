#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    long long int a,i,j,b,t,stop,countz=-1,no,c;
    scanf("%lld",&stop);
    for(t=0;t<stop;t++)
    {
        scanf("%lld %lld",&a,&b);
        for(j=sqrt(a);j<=sqrt(b);j++)
        {
            countz++;

        }
        if(a==1)
        {
            printf("%lld\n",countz+1);
        }
        else if(sqrt(a)*sqrt(b)==a)
        {
            printf("%lld",countz+1);
        }
        else
        {
            printf("%lld\n",countz);
        }
        countz=-1;
    }
    return 0;
}
