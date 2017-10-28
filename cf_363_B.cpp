#include<bits/stdc++.h>
#define pi 3.14159265358979323846264
#define all(c) c.begin(),c.end()
#define present(c, element) (c.find(element) != c.end())
#define cpresent(c, element) (find(all(c),element) != c.end())
#define pb push_back
#define mp make_pair
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef long long ll;
int main()
{
    int n,k,sum=0,ans=0;
    cin>>n>>k;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<k;i++)
        sum+=arr[i];
    ans=sum;
    int idx=0;
    for(int i=0;i<n-k;i++){
        sum=sum-arr[i]+arr[i+k];
        if(sum<ans){
            ans=sum;
            idx=i+1;
        }
    }
    cout<<idx+1;
}
