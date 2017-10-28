#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int ,int> a,pair<int ,int> b){
    return a.first<b.first;
}
int main(){
    int n;
    cin>>n;
    vector< pair<int,int> > a;
    vector< pair<int,int> > b;
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        a.push_back(make_pair(t,i));
    }
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        b.push_back(make_pair(t,i));
    }
    sort(a.begin(),a.end(),cmp);
    sort(b.begin(),b.end(),cmp);
    int f=0;
    int ans=100005;
    for(int i=0;i<n;i++){
        if(a[i].second!=b[i].second){
            ans=a[i].first+b[i].first;
            f=1;
            break;
        }
    }
    ans=min(a[0].first+b[1].first,min(ans,a[1].first+b[0].first));
    cout<<ans<<endl;
    return 0;
}
