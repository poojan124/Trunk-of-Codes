#include<math.h>
#include<stdio.h>
#include<iostream>
#include<limits.h>
#include<string.h>
using namespace std;
int dp[150][150];
int ar1[150]={0},ar2[150]={0};
int lcs(string s1,string s2)
{
    int n,m;
    n=s1.length();
    m=s2.length();
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
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
string backtrack(string s1,string s2,int i,int j){
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
    while(cin.eof()==0){
        cin>>s1>>s2;
        int len,i,j,n,m;
        string ans;
        for(i=0;i<150;i++)
            ar1[i]=ar2[i]=0;
        len=lcs(s1,s2);
        n=s1.length();
        m=s2.length();
        ans=backtrack(s1,s2,s1.length(),s2.length());
        i=0;j=0;
        string fi;
        while(i<n&&j<m){
            while(ar1[i]==0&&i<n){
                fi=fi+s1[i];
                i++;
            }
            while(ar2[j]==0&&j<m){
                fi=fi+s2[j];
                j++;
            }
            fi=fi+s1[i];
            i++;
            j++;
        }
        if(i<n){
            while(i<n)
                fi=fi+s1[i++];
        }
        else if(j<m){
            while(j<m)
                fi=fi+s2[j++];
        }
        cout<<fi<<endl;
    }
}
