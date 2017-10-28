#include <bits/stdc++.h>
using namespace std;


int main() {
    //ifstream fi;
    //fi.open("input.txt");
    int n,k;
    cin>>n;
    cin>>k;
    cout<<n<<" "<<k<<endl;
    int a[n+1];
    int v[n+1];
    int f=0;
    int menma = 0;
    memset(v,0,sizeof(v));
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        if(v[i])
            continue;
        int c_max = -1;
        for(int j=i+1;j<i+k && j<n;j++){
            if(a[j]==1)
                c_max=j;
        }
        if(c_max == -1 && a[i]!=1){
            int anohana = -1;
            for(int j=i-1;j>=0 &&j>i-k;j--)
                if(a[j]==1){
                    anohana = j;
                    break;
                }
            if(anohana==-1)
                f=1;
            else{
                menma++;
                for(int j = anohana-k+1;j<=anohana+k-1;j++)
                    v[j]=1;
            }
        }
        else{
            if(c_max==-1)
                c_max=i;
            menma++;
            for(int j = c_max-k+1;j<=c_max+k-1;j++)
                    v[j]=1;
        }
        if(f){
            cout<<"Evil : "<<i<<endl;
            break;
        }
    }
    for(int i=220;i<=245;i++){
        cout<<"index : "<<i<<" value: "<<a[i]<<endl;
    }
    if(f)
        printf("-1");
    else
        printf("%d",menma);
    return 0;
}
