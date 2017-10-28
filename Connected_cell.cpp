#include<stdio.h>
#include<math.h>
#include<iostream>
#include<strings.h>
int visited[12][12],ar[12][12]={0},n,m,counter=0;
using  namespace std;
void dfs(int,int);
void ans();
int main()
{
    int i,temp,j;
    temp=scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&ar[i][j]);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            visited[i][j]=0;
        }
    }
    ans();
    return 0;
}
void ans()
{
    int i,j,max=0;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            dfs(i,j);
            if(counter>max)
                max=counter;
            counter=0;
        }

    }
    printf("%d",max);
}
void dfs(int i,int j)
{
    if(i<1||i>m||j<1||j>n)
        return;
    if(visited[i][j]==1||ar[i][j]==0)
        return;
    counter++;
    visited[i][j]=1;
    dfs(i,j+1);
    dfs(i+1,j+1);
    dfs(i+1,j);
    dfs(i+1,j-1);
    dfs(i,j-1);
    dfs(i-1,j-1);
    dfs(i-1,j);
    dfs(i-1,j+1);
}
