#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll x,y,l,r;
    cin>>x>>y>>l>>r;
    vector<ll> a;
    vector<ll> b;
    ll num=1;
    a.push_back(num);
    while(num<= 1e18/x){
        num=num*x;
        a.push_back(num);
    }
    num=1;
    b.push_back(num);
    while(num<= 1e18/y){
        num=num*y;
        b.push_back(num);
    }
    vector<ll> v;
    for(auto i:a){
        for(auto j:b){

                v.push_back(i+j);
        }
    }
    sort(v.begin(),v.end());
    ll si=-1,ei=-1;
    for(int i=0;i<v.size();i++){
        if(si==-1 && v[i]>=l && v[i]<=r)
            si=i;
        if(si!=-1 && v[i]<=r)
            ei=i;
        if(v[i]>r)
            break;
    }
    if(si==-1 && ei==-1){
        cout<<r-l+1<<endl;
        return 0;
    }
    ll ans=0;
    ans=max(v[si]-l,ans);
    ans=max(r-v[ei],ans);
    for(int i=si+1;i<=ei;i++){
        ans=max(ans,v[i]-v[i-1]-2+1);
    }
    cout<<ans<<endl;
    return 0;
}
