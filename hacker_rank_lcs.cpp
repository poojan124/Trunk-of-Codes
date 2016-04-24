#include<stdio.h>
#include<iostream>
using namespace std;
int max(int a,int b){return a>b?a:b;}
int dp[1005][1005];
int main()
{
    int n,m,ar1[1005],ar2[1005];
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>ar1[i];
    for(int i=0;i<m;i++)
        cin>>ar2[i];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0||j==0)
                dp[i][j]=0;
            else if(ar1[i-1]==ar2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    int len;
    len=dp[n][m];
    int ans[len+1];

    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (ar1[i-1] == ar2[j-1])
        {
            ans[len-1] = ar1[i-1];
            i--; j--; len--;
        }
        else if (dp[i-1][j]>dp[i][j-1])
            i--;
        else
            j--;
    }
    for(i=0;i<dp[n][m];i++)
        cout<<ans[i]<<" ";
    return 0;
}
