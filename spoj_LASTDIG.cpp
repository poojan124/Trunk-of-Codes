#include<stdio.h>
#include<math.h>
#include<iostream>
#define m 10
using namespace std;
long long pow(long long a,long long b){
    long long res=1;
    while(b>0){
        if(b%2==1){
            res=res*a;
            res=res%m;
        }
        a=(a*a)%m;
        b=b/2;
    }
    return res%m;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b,ans;
        scanf("%lld %lld",&a,&b);
        ans=pow(a,b);
        printf("%lld\n",ans);
    }
}
