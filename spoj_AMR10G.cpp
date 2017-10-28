#include<bits/stdc++.h>
#define pi 3.14159265358979323846264
#define all(c) c.begin(),c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
#define pb push_back
#define sc scanf
#define P printf
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
int main()
{
    int t;
    sc("%d",&t);
    while(t--){
        long long int n,k,ans=9999999999;
        scanf("%lld %lld",&n,&k);
        long long a[n+1];
        for(int i=0;i<n;i++)
            sc("%lld",&a[i]);
        sort(a,a+n);
        if(k==1){
            cout<<"0"<<endl;
            continue;
        }
        for(int i=0;i<=n-k;i++){
            ans=min(ans,abs(a[i]-a[i+k-1]));
        }
        cout<<ans<<endl;
    }

}

