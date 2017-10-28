#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int dp[n+1][n+1];
        for(int i=0;i<=n;i++)
            for(int j=0;j<=n;j++)
                dp[i][j]=0;

        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=i;j<n;j++){
                if(s[j]=='1')
                    dp[i][j]=++cnt;
                else
                    dp[i][j]=--cnt;
            }
        }

        int max=0;
        for(int i=0;i<n;i++){
            int temp=0,idx=0;
            for(int j=0;j<n;j++){
                if(dp[i][j]>0){
                    idx=j+1;
                    temp=j-i+1;
                }
            }
            //cout<<idx<<"  "<<temp<<endl;
           while(idx<n&&idx>0){
                int t_idx=0;
                for(int c=0;c<n;c++)
                    if(dp[idx][c]>0)
                        t_idx=c;

                if(t_idx!=0){
                    temp=temp+t_idx-idx+1;
                    idx=t_idx;
                }
                idx++;
                cout<<"idx : "<<idx<<" t_idx : "<<t_idx<<endl;
           }
           cout<<"temp : "<<temp<<endl;
           if(temp>max)
                max=temp;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 cout.width(3);
                 cout<<dp[i][j];
            }
            cout<<"\n";
        }
        cout<<max<<endl;
    }
}
