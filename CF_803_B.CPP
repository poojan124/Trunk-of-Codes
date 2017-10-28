#include<bits/stdc++.h>
#define maxn -200005
#define minn -200005
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    vector<int> v;
    v.push_back(minn);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(!a[i])
            v.push_back(i);
    }
    v.push_back(maxn);
    int ans[n+1];
    int j=0;
    for(int i=0;i<n;i++){
        ans[i]=min(abs(v[j]-i),abs(v[j+1]-i));
        if(!a[i])
            j++;
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    return 0;
}
