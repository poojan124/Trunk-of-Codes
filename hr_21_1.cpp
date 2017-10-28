#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int p[n+1],v[n+1];
    for(int i=0;i<n;i++)
        cin>>p[i];
    for(int i=0;i<n;i++)
        cin>>v[i];
    int ans=99999;
    int idx=-1;
    for(int i=0;i<n;i++){
        int t = p[i]/v[i];
        if(t<ans){
            ans=t;
            idx=i;
        }
        if(t==ans){
            idx=-1;
        }
    }
    cout<<idx<<endl;
    return 0;
}
