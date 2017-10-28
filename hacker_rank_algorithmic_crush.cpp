#include<stdio.h>
#include<iostream>
using namespace std;
long long arr[10000005]={0};
int main()
{
    long long n,m,k,a,b,all_max=0;
    scanf("%lld %lld",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%lld %lld %lld",&a,&b,&k);
        arr[a]+=k;
        if(b+1<=k)
            arr[b+1]-=k;
    }
    long long x;
    all_max=-1;
    for(int i=0;i<n;i++){
        x=x+arr[i];
        if(all_max<x)
            all_max=x;
    }
    cout<<all_max;
    return 0;
}
