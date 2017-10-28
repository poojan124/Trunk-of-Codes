#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
long long int f[1000005],ans[1000005];
void sol()
{
    for(int i=1;i<=1000000;i++)
        f[i]=1;
    for(int i=2;i<=1000000;i++){
        int j=2;
        while((i*j)<=1000000){
            f[i*j]+=i;
            j++;
        }
    }
    ans[1]=ans[0]=0;
    for(int i=2;i<=1000000;i++)
        ans[i]=ans[i-1]+f[i];
}
int main()
{
    int t;
    cin>>t;
    sol();
    while(t--){
        int n;
        scanf("%d",&n);
        printf("%lld\n",ans[n]);
    }
    return 0;
}
