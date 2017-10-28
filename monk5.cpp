#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+2],b[n+2];
        k=k%n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n;i++){
            if((i+k)%n == 0)
                b[n]=a[i];
            else
                b[(i+k)%n]=a[i];
        }
        for(int i=1;i<=n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}
