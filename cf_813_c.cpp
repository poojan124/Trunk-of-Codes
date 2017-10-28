#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > g(200005);
vector< pair<int,int> > dep(200005);
int d=0;
int v[200005];
void dfs(int s,int f){
    if(!v[s]){
        v[s]=1;
        if(f)
            dep[s].first=d++;
        else
            dep[s].second=d++;
        for(auto i:g[s])
            dfs(i,f);
        d--;
    }
}
int main(){
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    memset(v,0,sizeof(v));
    dfs(1,1);
    memset(v,0,sizeof(v));
    d=0;
    dfs(x,0);
    int curr_max=0;
    for(int i=2;i<=n;i++){
        if(dep[i].first>curr_max && dep[i].second<dep[i].first)
            curr_max=dep[i].first;
    }
    cout<<curr_max*2<<endl;
    return 0;
}
