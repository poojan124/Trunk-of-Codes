#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int i,temp,n,sum=0;
        vector<int> v;
        scanf("%lld",&n);
        for(i=0;i<n;i++){
            scanf("%lld",&temp);
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++){
            vector<int> :: iterator it = upper_bound(v.begin(),v.end(),v[i]);
            sum=sum+(it-v.begin());
        }
        printf("%lld\n",sum);
    }
    return 0;
}
