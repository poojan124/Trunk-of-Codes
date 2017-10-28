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
struct dis{
int deg;
int par;
}a[50000];
int fi(int c){
    if(a[c].par!=c)
        a[c].par=fi(a[c].par);
    return a[c].par;
}
void uni(int m,int n){
    if(a[m].deg>a[n].deg){
        a[n].par=a[m].par;
    }
    else if(a[m].deg<a[n].deg){
        a[m].par=a[n].par;
    }
    else{
        a[n].par=a[m].par;
        a[m].deg++;
    }
}
int main()
{
    for(int i=0;i<50000;i++){
        a[i].deg=0;
        a[i].par=i;
    }
    int n;
    scanf("%d",&n);
    vii v;
    for(int i=0;i<n;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        v.pb(mp(x,y));
        int a=fi(x);
        int b=fi(y);
        uni(a,b);
    }
    map<int,int> m;
    bool arr[35000]={0};
    for(int i=0;i<v.size();i++){
        int x=fi(v[i].first);
        int y=fi(v[i].second);
        if(m.find(x)!=m.end()){
            if(arr[v[i].first]!=true){
                m[x]++;
            }
            if(arr[v[i].second]!=true){
                m[x]++;
            }
        }
        else{
            m.insert(mp(x,0));
            if(arr[v[i].first]!=true){
                m[x]++;
            }
            if(arr[v[i].second]!=true){
                m[x]++;
            }
        }
        arr[v[i].first]=true;
        arr[v[i].second]=true;
    }
    int ans1=99999999,ans2=0;
    for(map<int,int> :: iterator it =m.begin();it!=m.end();it++){
        ans1=min(it->second,ans1);
        ans2=max(it->second,ans2);
    }
    cout<<ans1<<ans2;
}

