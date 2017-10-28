#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f=2;
    int prea=0,preb=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(abs(a-b)>0)
            f=1;
        if((prea-a<0 || preb-b<0) && f!=1 && i!=0)
            f=0;
        prea=a;
        preb=b;
    }
    if(f==1)
        cout<<"rated"<<endl;
    else if(f==2)
        cout<<"maybe"<<endl;
    else
        cout<<"unrated"<<endl;
    return 0;
}
