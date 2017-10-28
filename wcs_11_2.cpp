#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
ll mod_pow(ll a,ll b,ll m){
    ll res=1;
    while(b){
        if(b%2)
            res=(res*a)%m;
        a=(a*a)%m;
        b=b/2;
    }
    return res%m;
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int b,k,m;
    cin>>k>>b>>m;
    ll s1=0;
    ll sum1 = 0;
    ll pow =(k-1);
    for(int i=0;i<=(k-1);i++){
        sum1 += mod_pow(b,pow,m)*(s[i]-48);
        //out<<"WTF "<<sum1<<endl;
        pow--;
    }
    //cout<<"Somthing "<<sum1<<endl;
    s1= s1+sum1%m;
    pow=k-1;
    for(int i=k;i<n;i++){
       // cout<<"i-k value: "<<s[i-k]-48<<endl;
            ll temp = ((sum1-(mod_pow(b,pow,m)*(s[i-k]-48))%m);
            if(temp<0){
                temp = m-temp;
                sum1 = (temp*b + (s[i]-48)))%m;
            }

        s1= s1 + sum1;
    }
    cout<<s1<<endl;
}
