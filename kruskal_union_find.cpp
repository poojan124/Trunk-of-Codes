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
    int w;
};
bool cmp(struct edge e1,struct edge e2){
    return e1.w<e2.w;
}
struct dis{
    int p;
    int deg;
}arr[10005];
int find(int d){
    if(arr[d].p!=d)
        arr[d].p=find(arr[d].p);
    return arr[d].p;
}
void uni(int a,int b){
    int x=find(a);
    int y=find(b);
    if(arr[x].deg<arr[y].deg){
        arr[x].p=y;
    }
    else if(arr[x].deg>arr[y].deg){
        arr[y].p=x;
    }
    else{
        arr[y].p=x;
        arr[x].deg++;
    }
}
int main()
{
    int n,e,sum=0;//sum is cost of mst
    scanf("%d %d",&n,&e);
    struct edge ed;
    vector<edge> ed_list;
    int s,d,w;
    for(int i=0;i<e;i++){
        scanf("%d %d %d",&s,&d,&w);
        ed.a=s;ed.b=d;ed.w=w;
        ed_list.push_back(ed);
    }
    sort(all(ed_list),cmp);
    for(int i=0;i<=n;i++){
        arr[i].p=i;
        arr[i].deg=0;
    }
    for(vector<edge> :: iterator it=ed_list.begin();it!=ed_list.end();it++){
        ed=*it;
        int x=find(ed.a);
        int y=find(ed.b);
        if(x!=y){
            sum+=ed.w;
            uni(ed.a,ed.b);
        }
    }
    cout<<sum;
}
