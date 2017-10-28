#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector< pair<int,int> > v(5005);
    int V[5000+5]={0};
    int con_zon[5005]={0};
    for(int i=0;i<n;i++){
        if(!V[a[i]]){
            int x,y;
            int val=a[i];
            x=i;
            y=i;
            for(int j=i+1;j<n;j++){
                if(a[j]==val){
                    y=j;
                }
            }
            v[val].first = x ;
            v[val].second = y;
            //cout<<val<<" "<<v[val].first<<" "<<v[val].second<<endl;
            V[val]=1;
        }
    }
    //cout<<"ahiya"<<endl;
    int seg[5005]={0};z
    for(int i=0;i<=5005;i++){
        int visi[5005]={0};
        if(V[i]==1){
            long long xo=0;
            //cout<<"Xo checker : "<<v[i].first<<" "<<v[i].second<<" "<<i<<endl;
            for(int j=v[i].first;j<=v[i].second;j++){
                if(!visi[a[j]]){
                    xo^=a[j];
                    visi[a[j]]=1;
                }
            }
            //cout<<"seg of :"<<i<<" "<<xo<<endl;
            seg[i]=xo;
        }
    }
    //cout<<"ahiya2"<<endl;
    int max=0;
    for(int i=0;i<n;i++){
        int ans=0;
        for(int j=i;j<n;){
            //cout<<"infinity"<<endl;
            if(v[a[j]].first==j){
                //cout<<v[a[j]].first<<" "<<v[a[j]].second<<endl;
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

