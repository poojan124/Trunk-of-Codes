#include<bits/stdc++.h>
using namespace std;
int flag=0;
int v[140005];
int S;
vector< map<int,int> > V(140005);
int lp[140005];
void dfs(int s){
    if(s==S && v[s])
        return;
    v[s]=1;
    for(auto i:V[s]){
        for(auto j:i){
            lp[j.first]=j.second;
            dfs(j.first);
            lp[j.first]-=j.second;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        memset(lp,0,sizeof(lp));

        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            V[x][y]++;
        }
        for(int i=1;i<=n;i++){
            memset(v,0,sizeof(v));
            if( lp[i]==0 && !V[i].empty()){
                S=i;
                dfs(i);
            }
        }
    }
    return 0;
}
