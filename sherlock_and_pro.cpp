#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long x=0;
        long long ans=0;
        for(long long i=0;i<n;i++)
            ans+= s[i]-48;
        for(long long i=0;i<k;i++)
            x+= s[i]-48;
        //cout<<x<<" "<<ans<<endl;
        if(k>1)
            ans += x*(x-1);
        for(long long i=k;i<n;i++){
            ans += (x)*(s[i]-48)*2;
            x=x+(s[i]-48)-(s[i-k]-48);
            //cout<<x<<"hola amigo"<<ans<<endl;
        }
        long long btm=n*n;
        long long g= gcd(btm,ans);
        //cout<<ans<<" "<<btm<<" "<<g<<endl;
        cout<<ans/g<<"/"<< btm/g<<endl;
    }
}
