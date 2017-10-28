#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<long long  ,long long > a,pair<long long  ,long long > b){
    return a.second>b.second;
}
int  main()
{
    long long  n,k;
    cin>>n>>k;
    vector< pair<long long , long long > > v;
    for(long long  i=0;i<n;i++){
        long long  a,b;
        cin>>a>>b;
        long long t=0;
        if(a<b)
            if(2*a<=b)
                t=a;
            else
                t=b-a;
        v.push_back(make_pair(min(a,b),t));
    }
    sort(v.begin(),v.end(),cmp);
    long long  ans=0;
    for(long long  i=0;i<k;i++)
        ans+=v[i].second+v[i].first;
    for(long long  i=k;i<n;i++)
        ans+=v[i].first;
    cout<<ans<<endl;
    return 0;
}
