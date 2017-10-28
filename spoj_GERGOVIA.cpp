#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0){
        long long int temp,wine=0,ans=0;
        for(int i=0;i<n;i++){
            scanf("%lld",&temp);
            wine=wine+temp;
            ans=ans+abs(wine);
        }
        printf("%lld\n",ans);
        scanf("%d",&n);
    }
    return 0;
}
