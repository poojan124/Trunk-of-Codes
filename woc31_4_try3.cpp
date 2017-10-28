#include<bits/stdc++.h>
using namespace std;

int mi=0,mj=0;
float max_=0;

struct ds{
    int p;
    int d;
}dis[100005];

struct edge{
    pair<int ,int> w;
    int x;
   int y;
};

bool cmp(edge e1 , edge e2){
    float temp1 = (e1.w.first+mi)/(float)(e1.w.second+mj);
    float temp2 = (e2.w.first+mi)/(float)(e2.w.second+mj);
    if(temp1>temp2)
        return true;
    else
        return false;
}
int find_set(int x){
    if(dis[x].p!=x)
        dis[x].p=find_set(dis[x].p);
    return dis[x].p;
}

void union_(int x,int y){
    int xR = find_set(x);
    int yR = find_set(y);
    if(dis[xR].d>dis[yR].d)
        dis[yR].p=xR;
    else if(dis[xR].d<dis[yR].d)
        dis[xR].p=yR;
    else{
        dis[yR].p=xR;
        dis[xR].d++;
    }
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
        if((a/(float)b)>max_){
            max_=a/(float)b;
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
    e_t=v[idx];
    v[idx]=v[0];
    v[0]=e_t;
    sort(v.begin()+1,v.end(),cmp);
    /**for(int i=0;i<v.size();i++){
        cout<<v[i].x<<" "<<v[i].y<<" "<<v[i].w.first<<" "<<v[i].w.second<<endl;
    }**/
    for(int i=0;i<=n;i++){
        dis[i].p=i;
        dis[i].d=0;
    }
    int a_=0,b_=0;
    for(vector<edge>::iterator it=v.begin();it!=v.end();it++){
        if(find_set((*it).x)!=find_set((*it).y)){
            //ans.push_back(*it);
            union_((*it).x,(*it).y);
            a_+=(*it).w.first;
            b_+=(*it).w.second;
        }
    }
    cout<<a_<<"/"<<b_<<endl;
    return 0;
}

