#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    if(k<=n*n){
        int a[n+1][n+1];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                a[i][j]=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!a[i][j] && k>1 && (i!=j)){
                    a[i][j]=1;
                    a[j][i]=1;
                    k-=2;
                }
                if(i==j && k>0){
                    a[i][j]=1;
                    k--;
                }
            }
            if(k==0)
                break;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}
