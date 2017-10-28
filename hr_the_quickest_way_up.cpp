#include<bits/stdc++.h>
#define maxi 9999
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        int ne[105],me[105];
       // memset(ns,0,sizeof(ns));
        memset(ne,0,sizeof(ne));
        //memset(ms,0,sizeof(ms));
        memset(me,0,sizeof(me));
        cin>>n;
        while(n--){
            int x,y;
            cin>>x>>y;
            ne[y]=x;
        }
        cin>>m;
        while(m--){
            int x,y;
            cin>>x>>y;
            me[x]=y;
        }
        int dp[105];
        memset(dp,0,sizeof(dp));
        dp[1]=dp[2]=dp[3]=dp[4]=dp[5]=dp[6]=dp[7]=1;
        for(int i=8;i<=100;i++){
            if(me[i]==0){
                if(ne[i]==0)
                    dp[i]=min(dp[i-1],min(dp[i-2],min(dp[i-3],min(dp[i-4],min(dp[i-5],dp[i-6])))))+1;
                else
                    dp[i]=min(min(dp[i-1],min(dp[i-2],min(dp[i-3],min(dp[i-4],min(dp[i-5],dp[i-6])))))+1,dp[ne[i]]);
            }
            else{
                //cout<<"gola lola for :"<<i<<endl;
                if(ne[i]==0)
                    dp[me[i]]=min(dp[i-1],min(dp[i-2],min(dp[i-3],min(dp[i-4],min(dp[i-5],dp[i-6])))))+1;
                else
                    dp[me[i]]=min(min(dp[i-1],min(dp[i-2],min(dp[i-3],min(dp[i-4],min(dp[i-5],dp[i-6])))))+1,dp[ne[i]]);

                dp[i]=9999;
                //cout<<"fir : "<<dp[me[i]]<<" sec: "<<dp[i]<<" idx : "<<me[i]<<endl;
            }
        }
        for(int i=8;i<=100;i++){
            if(me[i]==0){
                if(ne[i]==0)
                    dp[i]=min(min(dp[i-1],min(dp[i-2],min(dp[i-3],min(dp[i-4],min(dp[i-5],dp[i-6])))))+1,dp[i]);
                else
                    dp[i]=min(min(min(dp[i-1],min(dp[i-2],min(dp[i-3],min(dp[i-4],min(dp[i-5],dp[i-6])))))+1,dp[ne[i]]),dp[i]);
            }
        }
        /*for(int i=1;i<=100;i++){
            cout<<"i : "<<i<<" val: "<<dp[i]<<endl;
        }*/
        if(dp[100]!=10000)
            cout<<dp[100]<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
