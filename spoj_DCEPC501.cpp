#include<bits/stdc++.h>
#define pi 3.14159265358979323846264
#define all(c) c.begin(),c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
long long int max(long int a,long int b){
    return a>b?a:b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,ans=0;
        scanf("%lld",&n);
        int arr[n+10];
        memset(arr,0,sizeof arr);
        for(int i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        long long int dp[n+10];
        memset(dp,0,sizeof dp);
        for(int i=n-1;i>=0;i--){
            dp[i]=max(arr[i]+dp[i+2],max(arr[i]+arr[i+1]+dp[i+4],arr[i]+arr[i+1]+arr[i+2]+dp[i+6]));
        }
        printf("%lld\n",dp[0]);
    }
}


