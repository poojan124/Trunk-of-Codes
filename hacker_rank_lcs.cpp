#include<stdio.h>
#include<iostream>
using namespace std;
int max(int a,int b){return a>b?a:b;}
int dp[2][1005];
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
    cout<<dp[n][m]<<endl;
    return 0;
}
