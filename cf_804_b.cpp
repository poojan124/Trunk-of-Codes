#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    int cnt=0;
    int idx=0;
    for(int i=len-1;i>=0;i--){
        if(s[i]=='a' &&cnt!=0){
            idx=i;
            break;
        }
        else if(s[i]=='b')
            cnt++;
    }
    int sum=0;
    for(int i=idx;i>=0;i--){
        if(s[i]=='a'){
            sum=(sum%m+cnt%m)%m;
            cnt=cnt*2;
            cnt=cnt%m;
        }
        else{
            cnt++;
        }
    }
    cout<<sum%m<<endl;
}
