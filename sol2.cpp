#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++){
        int l,x,r;
        cin>>l>>r>>x;
        //cout<<l<<" "<<x<<" "<<r<<endl;
        int c=x-l+1;
        int val = a[x];
        int cnt=0;
        for(int j=l;j<=r;j++){
            if(a[j]<=val)
                cnt++;
            if(cnt>c)
                break;
        }
        //cout<<"cnt "<<cnt<<"c value :"<<c<<endl;
        if(cnt!=c)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}
