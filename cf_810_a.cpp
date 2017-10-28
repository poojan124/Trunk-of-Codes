#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n],s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    float c =s/float(n);
    int ans;
    if(abs(c-k)<=0.5)
        ans=0;
    else
        ans = ((k-0.5)*n - s)*2;
    cout<<ans<<endl;
    return 0;
}
