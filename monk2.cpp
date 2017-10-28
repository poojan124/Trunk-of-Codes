
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        char a[100005];
        cin>>a;
        int k=0;
        char temp = a[k];
        while(temp != '\0' ){
            temp =  a[++k];
        }
        //cout<<k<<endl;
        int f=1,j=k-1;
        for(int i=0;i<k;i++){
            if(a[i]!=a[j]){
                f=0;
                break;
            }
            j--;
        }
        if(f==1){
            if(k%2==0)
                cout<<"YES"<<" EVEN"<<endl;
            else
                cout<<"YES"<<" ODD"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
