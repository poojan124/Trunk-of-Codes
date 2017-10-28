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
int v[100005]={0};
vi g[100005];
vi st[2];
bool ans;
bool color(int s,int clr=2){
    v[s]=clr;
    st[clr-1].pb(s);
    for(int i=0;i<g[s].size();i++){
        if(!v[g[s][i]] && color(g[s][i],3-clr))
            return 1;
        if(v[g[s][i]]!=(3-clr))
            return 1;
    }
    return 0;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        g[a-1].pb(b-1);
        g[b-1].pb(a-1);
    }
    for(int i=0;i<n;i++){
        if(!v[i] && !g[i].empty()){
            if(color(i)){
                cout << "-1" << endl;
                return 0;
            }
        }
    }
    for(int i=0;i<2;i++){
        int c=st[i].size();
        cout<<c<<endl;
        for(int j=0;j<c;j++)
            cout<<st[i][j]+1<<" ";

        cout<<endl;
    }

    return 0;
}

