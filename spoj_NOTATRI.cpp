/**Boosted -- CY@**/
#include<bits/stdc++.h>
#define pi 3.14159265358979323846264
#define all(c) c.begin(),c.end()
#define present(c, element) (c.find(element) != c.end())
#define cpresent(c, element) (find(all(c),element) != c.end())
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef long long ll;
int main()
{
    int n;
    scanf("%d",&n);
    while(n){
        vi v;
        int ans=0;
        for(int i=0;i<n;i++){
            int temp;
            scanf("%d",&temp);
            v.pb(temp);
        }
        sort(all(v));
        for(int i=0;i<=n-3;i++){
            for(int j=i+1;j<=n-2;j++){
                int s=v[i]+v[j];
                ans+=n-(upper_bound(all(v),s)-v.begin());
            }
        }
        printf("%d\n",ans);
        scanf("%d",&n);
    }
}
