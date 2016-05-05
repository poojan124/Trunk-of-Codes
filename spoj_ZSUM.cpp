#include<math.h>
#include<stdio.h>
#include<iostream>
#define mod 10000007
using namespace std;
long long int expmod(long long int n,long long int p,long long int m) {
   if (p == 0) return 1;
   long long int nm = n % m;
   long long r = expmod(nm, p / 2, m);
   r = (r * r) % m;
   if (p % 2 == 0) return r;
   return (r * nm) % m;
}
int main()
{
    long long n,k;
    scanf("%lld %lld",&n,&k);
    while(n){
        long long temp1,temp2,temp3,temp4;
        temp1=expmod(n,k,10000007);
        temp2=(2*expmod(n-1,k,10000007))%10000007;
        temp3=expmod(n,n,10000007);
        temp4=(2*expmod(n-1,n-1,10000007))%10000007;
        long long ans=((temp1+temp2)%10000007+(temp3+temp4)%10000007)%10000007;
        printf("%lld\n",ans);
        scanf("%lld %lld",&n,&k);
    }
    return 0;
}
