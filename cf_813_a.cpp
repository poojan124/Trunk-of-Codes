#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);
    int m;
    cin>>m;
    vector< pair<int,int> > v;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    int  curr=0;
    int j=0;
    int ans=-1;
    for(int i=0;i<n;){
        if(j==v.size())
            break;
        int temp=curr+a[i];
        if(temp<=v[j].second){
            curr+=a[i];
            ans=max(v[j].first,curr);
            i++;
        }
        else
            j++;
    }
    cout<<ans<<endl;
    return 0;
}
