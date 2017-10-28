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
struct edge{
    int a;
    int b;
    int c;
};
bool cmp(struct edge ed1,struct edge ed2){
    return ed1.c<ed2.c;
}
struct dis{
    int p;
    int deg;
}arr[1005];
int find(int d){
    if(arr[d].p!=d)
        arr[d].p=find(arr[d].p);
    return arr[d].p;
}
void uni(int a,int b){
    int x=find(a);
    int y=find(b);
    if(arr[x].deg>arr[y].deg){
        arr[y].p=x;
    }
    else if(arr[y].deg>arr[x].deg){
        arr[x].p=y;
    }
    else{
        arr[y].p=x;
        arr[x].deg++;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int p,n,m,mst=0;
        scanf("%d %d %d",&p,&n,&m);
        struct edge ed;
        vector<edge> edge_list;
        for(int i=0;i<m;i++){
            int x,y,z;
            scanf("%d %d %d",&x,&y,&z);
            ed.a=x;ed.b=y;ed.c=z;
            edge_list.push_back(ed);
        }
        sort(all(edge_list),cmp);
        for(int i=0;i<=n;i++){
            arr[i].deg=0;
            arr[i].p=i;
        }
        for(vector<edge> :: iterator it= edge_list.begin();it!=edge_list.end();it++){
            ed=*it;
            int x=find(ed.a);
            int y=find(ed.b);
            if(x!=y){
                mst+=ed.c;
                uni(x,y);
            }
        }
        cout<<mst*p<<endl;
    }
}
