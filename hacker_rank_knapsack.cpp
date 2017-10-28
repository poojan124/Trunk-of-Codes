#include<bits/stdc++.h>
#define pi 3.14159265358979323846264
#define all(c) c.begin(),c.end()
#define present(c, element) (c.find(element) != c.end())
#define cpresent(c, element) (find(all(c),element) != c.end())
#define pb push_back
#define mp make_pair
#define sc scanf
#define P printf
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int dp[2050];
        int n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.pb(a);
        }
        sort(all(a));
        for(int i=1;i<=k;i++){
            for(int j=0;j<v.size();j++){
                if(v[j]>i)
                    continue;
                else{
                    dp[i]=max(v[j]+dp[i-v[j]],dp[i]);
                }
            }
        }
        cout<<dp[k]<<endl;
    }
    return 0;
}
