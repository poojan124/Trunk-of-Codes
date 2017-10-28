#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
long int p = 1000000007;
long int v_fact[2000001]={0};
void precompute()
{
    long long up = 1;
    for (long long i=1; i<=2000000; i++) {
        up=((up%p)*(i%p))%p;
        v_fact[i]=up;
    }
}
long long modPow(long long  a, long long x, long long p) {
    long long res = 1;
    while(x > 0) {
        if( x % 2 != 0) {
            res = (res * a) % p;
        }
        a = (a * a) % p;
        x /= 2;
    }
    return res%p;
}

long long modInverse(long long a,long  long p) {
    return modPow(a, p-2, p);
}
long long modBinomial(long long n, long long k,long long p)
{
    if(k>n-k)
        k=n-k;
    return ((((v_fact[n]%p)*(modInverse(v_fact[n-k],p)%p))%p)*(modInverse(v_fact[k],p)%p)) % p;
}
int main()
{
    int t;
    scanf("%d",&t);
    precompute();
    v_fact[0]=1;
    //printf("%ld %ld\n",v_fact[10],v_fact[10]);
    while(t--)
    {
        long long int ans,n,k;
        scanf("%lld %lld",&n,&k);
        printf("%lld\n",modBinomial(n-1,k-1,p));
        //printf("mod inverse : %lld %lld\n",(modInverse(v_fact[n-k],p)%p),(modInverse(v_fact[k],p)%p));
    }
    return 0;
}
