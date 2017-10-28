#include<bits/stdc++.h>
using namespace std;
long long max(long long a,long long b){
    return a>b?a:b;
}
int main()
{
    long long n;
    string s;
    ifstream fl("inp.txt");
    //cin>>n;
    //cin>>s;
    fl>>n;
    fl>>s;
    long long a,b,c;
    long long cnt=0;
    for(long long i=0;i<=n;i++){
    for(long long i=0;i<=n;i++){
        if(s[i]=='b' ){
            long long sqr = (i+1)*(i+1);
            long long start = sqr/(n-1);
            start = max(1,start);
            for(long long z=start;z<=(i+1);z++){
                if(sqr%z == 0 && ((sqr/z)-1 <= (n-1))){
                    if(s[z-1]=='a' && s[(sqr/z)-1]=='c') cnt++;
                    else if(s[z-1]=='c' && s[(sqr/z)-1]=='a') cnt++;
                    //cout<<z<<"  "<<(i+1)<<"  "<<sqr/(z)<<endl;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
