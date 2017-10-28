#include<bits/stdc++.h>
using namespace std;
struct dis{
    int p;
    int d;
};
dis d[100055];
static int dp[1005][1005];
int m;
int find(int x){
    if(d[x].p!=x)
        return find(d[x].p);
    return d[x].p;
}
void join(int x,int y){
    int xp=find(x);
    int yp=find(y);
    if(d[yp].d>d[xp].d)
        d[xp].p=d[yp].p;
    else if(d[yp].d<d[xp].d)
        d[yp].p=d[xp].p;
    else{
        d[yp].p=d[xp].p;
        d[xp].d++;
    }
}
int dps(int a[],int b[]){
    for(int i=0;i<=m;i++){
        dp[i][0]=0;
        dp[0][i]=0;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            if(find(a[i-1])==find(b[j-1]))
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[m][m];
}
int main(){
    int n,k;
    scanf("%d %d %d",&n,&k,&m);
    int a[m];
    for(int i=0;i<=n+4;i++){
        d[i].p=i;
        d[i].d=0;
    }
    for(int i=0;i<k;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        if(find(x)!=find(y))
            join(x,y);
    }
    /**for(int i=1;i<=n;i++){
        cout<<"i : "<<i<<" "<<d[i].p<<endl;
    }**/
    int b[m];
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    reverse(b,b+m);
    cout<<dps(a,b)<<endl;
    return 0;
}
