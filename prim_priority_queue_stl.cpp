#include<bits/stdc++.h>
#define pi 3.14159265358979323846264
#define all(c) c.begin(),c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
class cmp{
    public:
        bool operator()(pair<int ,int > a,pair<int ,int > b){
            return a.second>=b.second;
        }
};
bool v[3005];
priority_queue<pair<int,int>,vector<pair<int,int> >,cmp> q;
int main()
{
    int n,e,sum=0;
    scanf("%d %d",&n,&e);
    vii adj[n+1];
    for(int i=0;i<e;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        adj[a].push_back(make_pair(b,c));
        adj[b].push_back(make_pair(a,c));
    }
    int s;
    scanf("%d",&s);
    for(int i=0;i<adj[s].size();i++)
        q.push(adj[s][i]);
    memset(v,false,sizeof(v));
    v[s]=true;
    for(int i=0;i<n-1;i++){
        while(v[q.top().first])
            q.pop();
        sum+=q.top().second;
        s=q.top().first;
        v[s]=true;
        for(int i=0;i<adj[s].size();i++){
            if(!v[adj[s][i].first])
                q.push(adj[s][i]);
        }
    }
    printf("%d",sum);
    return 0;
}
