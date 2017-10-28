#include<stdio.h>
int visited[1001],a[1001][1001],d[1001],ans,n,queue[1001],front=-1,rear=-1;
void bfs();
int main()
{
    int t,stop;
    scanf("%d",&stop);
    for(t=0;t<stop;t++)
    {
        int i,m,s,x,y,j;
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++)
        {
            d[i]=-1;
            visited[i]=-1;
        }
        for(i=0;i<1001;i++)
            for(j=0;j<1001;j++)
                a[i][j]=0;
        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&x,&y);
            a[x][y]=1;
            a[y][x]=1;
        }
        scanf("%d",&s);
        bfs(s);
        for(i=1;i<=n;i++)
        {
            if(d[i]==-1)
                printf("%d ",d[i]);
            else if(d[i]!=0)
                printf("%d ",6*d[i]);
        }
        printf("\n");
    }
    return 0;
}
void bfs(int s)
{
    int i,j;
    visited[s]=0;
    d[s]=0;
    queue[0]=-1;
    queue[1]=s;
    front=1;
    rear=2;
    while(1)
    {
        if(front==rear)
            break;
        int u=queue[front++];
        for(i=1;i<=n;i++)
        {
            if(a[u][i]==1&&visited[i]==-1)
            {
                visited[i]=0;
                d[i]=d[u]+1;
                queue[rear++]=i;
            }
        }
        visited[u]=1;
    }
}
