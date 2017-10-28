#include<stdio.h>
int ans=-1,visited[101],a[101][101]={0},time=0,d[101],f[101],n;
void dfs(int);
int main()
{
    int m,x,y,i,j;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    	visited[i]=-2;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        a[x][y]=1;
        a[y][x]=1;
    }
    dfs(1);
    printf("%d",ans);
    return 0;
}
void dfs(int s)
{
    int j,i;
    d[s]=++time;
    visited[s]=0;
    for(j=1;j<=n;j++)
        if(visited[j]==-2&& a[s][j]==1)
            dfs(j);
    visited[s]=1;
    f[s]=++time;
    if(((f[s]-d[s]-1)/2)%2==1)
    	ans++;
}
