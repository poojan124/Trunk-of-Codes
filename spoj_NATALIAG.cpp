#include<bits/stdc++.h>
using namespace std;
string ar[200];
list<pair<int ,int>> q;
int cnt,n,m,v[200][200],dp[200][200];
void bfs(int a,int b){
    int flag=0;
    char s=ar[a][b];
    pair<int,int> ans;
    q.push_back(make_pair(a,b));
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            v[i][j]=0;
    v[a][b]=1;
    int depth=1;
    int c=1,is=1,x=0;
    dp[a][b]=0;
    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop_front();
        if((p.first+1<m) && (ar[p.first+1][p.second]!='*') ){
            if(v[p.first+1][p.second]!=1){
                v[p.first+1][p.second]=1;
                q.push_back(make_pair(p.first+1,p.second));
                dp[p.first+1][p.second]=dp[p.first][p.second]+1;
                if(ar[p.first+1][p.second]=='#'){
                    ans=make_pair(p.first+1,p.second);
                    flag=1;
                }
            }
            else{
                if(dp[p.first][p.second]+1<dp[p.first+1][p.second]){
                    dp[p.first+1][p.second]=dp[p.first][p.second]+1;
                }
            }
        }
        if((p.first-1>=0) && (ar[p.first-1][p.second]!='*') ){
            if((v[p.first-1][p.second]!=1)){
                v[p.first-1][p.second]=1;
                q.push_back(make_pair(p.first-1,p.second));
                dp[p.first-1][p.second]=dp[p.first][p.second]+1;
                if(ar[p.first-1][p.second]=='#'){
                    ans=make_pair(p.first-1,p.second);
                    flag=1;
                }
            }
            else{
                if(dp[p.first][p.second]+1<dp[p.first-1][p.second]){
                    dp[p.first-1][p.second]=dp[p.first][p.second]+1;
                }
            }
        }
        if((p.second+1<n) && (ar[p.first][p.second+1]!='*')){
            if((v[p.first][p.second+1]!=1)){
                v[p.first][p.second+1]=1;
                q.push_back(make_pair(p.first,p.second+1));
                dp[p.first][p.second+1]=dp[p.first][p.second]+1;
                if(ar[p.first][p.second+1]=='#')
                {
                    ans=make_pair(p.first,p.second+1);
                    flag=1;
                }
            }
            else{
                if(dp[p.first][p.second]+1<dp[p.first][p.second+1]){
                    dp[p.first][p.second+1]=dp[p.first][p.second]+1;
                }
            }
        }
        if((p.second-1>=0) && (ar[p.first][p.second-1]!='*') ){
           if((v[p.first][p.second-1]!=1)){
                v[p.first][p.second-1]=1;
                q.push_back(make_pair(p.first,p.second-1));
                dp[p.first][p.second-1]=dp[p.first][p.second]+1;
                if(ar[p.first][p.second-1]=='#'){
                    ans=make_pair(p.first,p.second-1);
                    flag=1;
                }
            }
            else{
                if(dp[p.first][p.second]+1<dp[p.first][p.second-1]){
                    dp[p.first][p.second-1]=dp[p.first][p.second]+1;
                }
            }
        }
    }
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }
    if(flag==1)
        printf("%d\n",dp[ans.first][ans.second]);
    else
        printf("-1\n");
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        cnt=0;
        scanf("%d %d",&m,&n);
        for(int i=0;i<m;i++){
            cin>>ar[i];
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ar[i][j]=='$')
                {
                    bfs(i,j);
                    break;
                }
            }
        }
    }
}
