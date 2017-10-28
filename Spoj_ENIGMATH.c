#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int a,b,temp;
        scanf("%lld %lld",&a,&b);
        temp=gcd(a,b);
        a=a/temp;
        b=b/temp;
        printf("%lld %lld\n",b,a);
    }
    return 0;
}
