#include<bits/stdc++.h>
#define pi 3.14159265358979323846264
#define all(c) c.begin(),c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
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
int main()
{
    int n;
    map<string,int> m;
    cin>>n;
    string temp="POLYCARP";
    m[temp]=1;
    int ans=0;
    for(int i=0;i<n;i++){
        string a,b,c;
        cin>>a>>b>>c;
        transform(a.begin(), a.end(), a.begin(),::toupper);
        transform(c.begin(), c.end(), c.begin(),::toupper);
        m.insert(mp(a,m[c]+1));
        ans=max(ans,m[a]);
    }
    cout<<ans;
}

