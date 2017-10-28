/**
**/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)cin>>a[i];
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    int maxi=0;
    int ted;
    int ed=a[0];
    int jmp=1;
    int i=1;
    int j;
    int f=0;
    while(i<n){
        maxi=0;
        for(j=i;j<=ed+i-1;j++){
            if(j>=n){
                f=1;
                break;
            }
            dp[j]=jmp;
            ted = a[j]-(ed+i-1-j);
            maxi=max(ted,maxi);
        }
        if(maxi==0 && (dp[n-1]==0)){
            cout<<"CANT DO IT"<<endl;
            return 0;
        }
        if(f)break;
        i=j;
        jmp++;
        ed=maxi;
    }
    for(int i=0;i<n;i++)
        cout<<dp[i]<<" ";
    cout<<endl;
    cout<<"Ans is : "<<dp[n-1]<<endl;
    return 0;
}
