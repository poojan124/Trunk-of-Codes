#include<stdio.h>
#include<iostream>
#include<string.h>
#define max 1000
using namespace std;
int dp[max][max];
int ar1[max]={0},ar2[max]=0;
int lcs(string s1,string s2)
{
    int n,m,i,j;
    n=s1.length();
    m=s2.length();
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i==0||j==0)
                dp[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=(dp[i][j-1]>dp[i-1][j])?dp[i][j-1]:dp[i-1][j];
        }
    }
    return dp[n][m];
}
string backtrack(string s1,string s2,int i,int j)
{
    if(i==0||j==0)
        return "";
    else if(s1[i-1]==s2[j-1]){
        ar1[i-1]=1;
        ar2[j-1]=1;
        return backtrack(s1,s2,i-1,j-1)+s1[i-1];
    }
    else
        if(dp[i][j-1]>dp[i-1][j])
            return backtrack(s1,s2,i,j-1);
        else
            return backtrack(s1,s2,i-1,j);
}
int main()
{
    string s1,s2;
    int lcs_length;
    getline(cin,s1);
    getline(cin,s2);
    lcs_length=lcs(s1,s2);
    printf("%d\n",lcs_length);
    string ans = backtrack(s1,s2,s1.length(),s2.length());
    if(ans.length()!=0)
        cout<<"Lcs string : "<<ans<<endl;
    return 0;
}
