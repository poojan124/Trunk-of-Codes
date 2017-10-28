#include<bits/stdc++.h>
using namespace std;
queue<int> q;
static int v[100001];
vector<int> g[100001];
char ar[100001];
int n,e;
int color=0;/**0=blue 1=pink**/
int inv=0;
void bfs(int s)
{
    v[s]=1;
    q.push(s);
    if(ar[s]=='G' && !color)
        inv++;
    if(ar[s]=='B' && color)
        inv++;
    //cout<<inv<<endl;
    while(q.empty()!=true){
        color=!color;
        int t;
        t=q.front();
        q.pop();
        for(vector<int>:: iterator it=g[t].begin();it!=g[t].end();it++){
            if(!v[*it]){
                q.push(*it);
                v[*it]=1;
                if((ar[*it]=='G' && !color)||(ar[*it]=='B' && color))
                    inv++;
            }
        }
    }
}
int main()
{
    cin>>n>>e;
    for(int i=1;i<=n;i++)
        cin>>ar[i];
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bfs(1);
    int tt=inv;
    color=1;
    inv=0;
    memset(v,0,sizeof(v));
    bfs(1);
    int ans=min(inv,tt);
    cout<<ans<<endl;
}
