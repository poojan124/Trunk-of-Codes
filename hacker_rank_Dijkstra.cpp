#include<bits/stdc++.h>
#define pi 3.14159265358979323846264
#define all(c) c.begin(),c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
#define tr(container, it) \
    for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
static int adj[3003][3003];
int mindis(bool s[],int dis[],int n){
	int min=INT_MAX,index;
	for(int i=1;i<=n;i++){
		if(!s[i]&&dis[i]<=min)
            min=dis[i],index=i;
	}
	return index;
}
void dij(int source,int n){
	bool s[n+1];
	int dis[n+1];
	for(int i=1;i<=n;i++) s[i]=false;
	for(int i=1;i<=n;i++) dis[i]=INT_MAX;
	dis[source]=0;
	for(int j=1;j<=n;j++){
		int u=mindis(s,dis,n);
		s[u]=true;
		for(int i=1;i<=n;i++){
			if(!s[i]&&adj[u][i]&&dis[u]!=INT_MAX&&dis[u]+adj[u][i]<dis[i])
			dis[i]=adj[u][i]+dis[u];
		}
	}
	for(int i=1;i<=n;i++){
        if(i==source) continue;
        if(s[i]==false||dis[i]==INT_MAX)
            printf("-1 "); else printf("%d ",dis[i]);}
    printf("\n");
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int N,M;

        cin>>N>>M;
        for(int i=1;i<=N;i++)
	       for(int j=1;j<=N;j++)
                adj[i][j]=0;
        for(int i=0;i<M;i++){
            int x,y,d;
            scanf("%d %d %d",&x,&y,&d);
            if(adj[x][y]==0||adj[x][y]>d){
                adj[x][y]=d;
            }
             if(adj[y][x]==0||adj[y][x]>d){
                adj[y][x]=d;
            }
        }
        int start;
        cin>>start;
        dij(start,N);
    }
}
