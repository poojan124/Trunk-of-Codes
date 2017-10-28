#include<stdio.h>
#include<iostream>
#include<math.h>
#define m 1000000007
long long modPow(long long  a, long long x, long long p) {
    //calculates a^x mod p in logarithmic time.
    long long res = 1;
    while(x > 0) {
        if( x % 2 != 0) {
            res = (res * a) % p;
        }
        a = (a * a) % p;
        x /= 2;
    }
    return res;
}

long long modInverse(long long a,long  long p) {
    //calculates the modular multiplicative of a mod m.
    //(assuming p is prime).
    return modPow(a, p-2, p);
}
long long modBinomial(long long n, long long k,long long p) {
// calculates C(n,k) mod p (assuming p is prime).

    if (k * 2 > n) k = n-k;
    long long numerator = 1; // n * (n-1) * ... * (n-k+1)
    long long denominator = 1;
    for (long long int i=0; i<k; i++) {
        numerator = (numerator * (n-i) ) % p;
        denominator = (denominator * (i+1)) % p;
    }

     // k!


    // numerator / denominator mod p.
    return ( numerator* modInverse(denominator,p) ) % p;
}
int main()
{
    int t=1;
    //scanf("%d",&t);
    while(t--)
    {
        long long int ans,n=2000000,k=1000000;
        //scanf("%lld %lld",&n,&k);
        printf("%lld\n",modBinomial(n-1,k-1,m));
    }
    return 0;
}
