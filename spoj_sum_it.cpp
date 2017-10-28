#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        long long ans=0,temp,ans1,ans2;
        temp=pow(2,n);
        temp=temp/2;
        for(i=1;i<=n;i++){
            ans=ans+(i*temp);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
