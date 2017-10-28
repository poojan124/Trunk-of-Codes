#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> p1,pair<int,int> p2){
    return p1.second<p2.second;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        vector<pair<int ,int >> v;
        int n,cnt=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            int x,y;
            pair<int,int> p;
            scanf("%d %d",&x,&y);
            p=make_pair(x,y);
            v.push_back(p);
        }
        sort(v.begin(),v.end(),cmp);
        int f_t,p_f_t;
        f_t=v[0].second;
        p_f_t=f_t;
        cnt=1;
        for(int i=1;i<n;i++){
            if(v[i].first>=f_t){
                f_t=v[i].second;
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
