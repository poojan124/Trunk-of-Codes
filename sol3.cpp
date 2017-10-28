#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector< pair<int,int> > v[5005];
    int V[5000+5]={0};
    int con_zon[5005]={0};
    for(int i=0;i<n;i++){
        if(!V[a[i]]){
            int x,y;
            int val=a[i];
            x=i;
            for(int j=i+1;j<n;j++){
                if(a[j]==val){
                    y=j;
                }
            }
            v[val].first = x ;
            v[val].second=y;
            V[val]=1;
        }
    }
    int seg[5005]={0};
    for(int i=0;i<5005;i++){
        int visi[5005]={0};
        if(V[i]==1){
            int xo=0;
            for(int j=v[i].first;j<=v[i].second;j++){
                if(!visi[a[j]]){
                    xo^=a[j];
                    visi[a[j]];
                }
            }
            seg[i]=xo;
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        int ans=0;
        for(int j=i;j<n;){
            if(v[a[j]].first==j){
                ans+=seg[a[j]];
                j=v[a[j]].second+1;
            }
            else
                j++;
        }
        if(ans>max)
            max=ans;
    }
    cout<<max<<endl;
    return 0;
}
