#include<bits/stdc++.h>
using namespace std;
vector<int> p;
int a_[1000006];
int b_[1000006];
void precompute(){
    p.push_back(2);
    p.push_back(3);
    int f=0;
    for(int i=4;i<=1000000;i++){
        f=0;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                f=1;
                break;
            }
        }
        if(!f)
            p.push_back(i);
    }
}
void fac(int x,vector<int> &v){
    for(int i=0;i<p.size();i++){
        if(p[i]*p[i]>x)
            break;
        if(x%p[i]==0)
            v.push_back(p[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n+1];
    int b[n+1];
    precompute();
    memset(a_,0,sizeof(a_));
    memset(b_,0,sizeof(b_));
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        a_[a[i]]++;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
        b_[b[i]]++;
    }
    int max_=0;
    int ans=0;
    for(int i=0;i<n;i++){
        vector<int> v;
        fac(a[i],v);
        int t=a[i];
        if(b_[a[i]]>0){
            if(max_<a[i]){
                ans=2*a[i];
                max_=a[i];
            }
            else if(max_==a[i] && ans<2*a[i])
                ans=2*a[i];
            continue;
        }
        while(!v.empty()){
            int flag=0;
            while(t%v[0]==0){
                t=t/v[0];
                if(b_[t]>0){
                    flag=1;
                    if(t>max_){
                        max_=t;
                        ans=t+a[i];
                    }
                    else if(t==max_ && ans<(t+a[i])){
                        ans=t+a[i];
                    }
                }
                if(flag)break;
            }
            if(flag)break;
            v.erase(v.begin(),v.begin()+1);
        }
    }
    //for b
    for(int i=0;i<n;i++){
        vector<int> v;
        fac(b[i],v);
        int t=b[i];
        while(!v.empty()){
            int flag=0;
            while(t%v[0]==0){
                t=t/v[0];
                if(a_[t]>0){
                    flag=1;
                    if(t>max_){
                        max_=t;
                        ans=t+b[i];
                    }
                    else if(t==max_ && ans<(t+b[i])){
                        ans=t+b[i];
                    }
                }
                if(flag)break;
            }
            if(flag)break;
            v.erase(v.begin(),v.begin()+1);
        }
    }
    printf("%d",ans);
    return 0;
}
