#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#define max1 1002
using namespace std;
long int n,ar[100005],m[max1][max1],visited[1005],min1=999999,sum=0;
void dfs(int);
long int abs(long int a,long int b)
{
    if(a>b)
        return a-b;
    else
        return b-a;
}
void sol();
int main()
{
    long int i,j,temp,x,y;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
        scanf("%ld",&ar[i]);
    for(i=0;i<max1;i++)
        for(j=0;j<max1;j++)
            m[i][j]=0;
    for(i=1;i<=n-1;i++)
    {
        scanf("%ld %ld",&x,&y);
        m[x][y]=1;
        m[y][x]=1;
    }
    /**for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%ld ",m[i][j]);
        }
        printf("\n");
    }**/
    sol();
    return 0;
}
void sol()
{
    int i,j,id1,id2,val1,val2,k;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            //printf("i= %ld j= %ld %ld\n",i,j,m[i][j]);
            if(m[i][j]==1)
            {
                for(k=0;k<1001;k++)
                    visited[k]=0;
                //printf("%ld %ld\n",i,j);
                m[i][j]=0;
                m[j][i]=0;
                dfs(i);
                val1=sum;
                sum=0;
                dfs(j);
                val2=sum;
                sum=0;
                //printf("%ld %ld\n",val1,val2);
                if(abs(val1,val2)<min1)
                    min1=abs(val1,val2);
                m[i][j]=1;
                m[j][i]=1;
            }
        }
    }
    printf("%ld\n",min1);
}
void dfs(int s)
{
    long int i,j;
    if(visited[s]==1)
        return;
    visited[s]=1;
    sum=sum+ar[s];
    for(i=1;i<=n;i++)
    {
        if(m[s][i]==1)
        {
            dfs(i);
        }
    }
}
