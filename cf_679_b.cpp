/**Cancel **/
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
    ll m,cnt=0;
    cin>>m;
    ll var=m;
    while(var>0){
        ll temp=pow(m,1/3.);
        cnt++;
        var=var-pow(temp,3);
    }
}
