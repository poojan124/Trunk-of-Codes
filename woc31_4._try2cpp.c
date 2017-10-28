#include<bits/stdc++.h>
using namespace std;
struct ds{
    int p;
    int d;
}dis[100005];
int mi=0,mj=0;
float max=0
struct edge{
    pair<int ,int> w;
    int x;
    int y;
};
bool cmp(edge e1;edge e2){
    float temp1 = (e1.w.first+mi)/(float)(e1.w.second+mj);
    float temp2 = (e2.w.first+mi)/(float)(e2.w.second+mj);
    if(temp1>temp2)
        return true;
    else
        return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    edge e;
    vector<edge> v;
    int idx;
    for(int i=0;i<m;i++){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        if((a/(float)b)>max){
            max=a/(float)b;
            mi=a;
            mj=b;
            idx = i;
        }
        e.w=make_pair(a,b);
        e.x=x;
        e.y=y;
        v.push_back(e);
    }
    edge e_t;
    e_r=v[idx];
    v[idx]=v[0];
    v[0]=e_t;
    sort(v.begin()+1,v.end(),cmp);
    for(int i=0;i<v.size();i++){
        cout<<v[0].x<<" "<<v[0].y<<" "<<v[0].w.first<<" "<<v[0].w.second<<endl;
    }
    return 0;
}

