#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int dp[6105][6105];
int sol( string X, string Y, int m, int n )
{
    int i, j;
    for (i=0; i<=m; i++)
    {
        for (j=0; j<=n; j++)
        {
        if (i == 0 || j == 0)
            dp[i][j] = 0;

        else if (X[i-1] == Y[j-1])
            dp[i][j] = dp[i-1][j-1] + 1;

        else
            dp[i][j] = (dp[i-1][j]>dp[i][j-1])?dp[i-1][j]:dp[i][j-1];
        }
    }
    return dp[m][n];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str,rev;
        cin>>str;
        rev=str;
        int n=str.length();
        reverse(rev.begin(),rev.end());
        cout<<n-sol(str,rev,n,n)<<endl;
    }
    return 0;
}
