#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,x,y,g1,g2;
        scanf("%lld %lld %lld %lld",&a,&b,&x,&y);
        g1=gcd(a,b);
        g2=gcd(x,y);
        if(g1==g2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
