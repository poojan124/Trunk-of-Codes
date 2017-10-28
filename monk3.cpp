#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        int a[n+1][n+1];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int c=i;c<n;c++){
                    for(int x=j;x<n;x++){
                        if(a[i][j]>a[c][x])
                            ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
