#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        cin.clear();
        string s;
        cin>>s;
        int ans=0;
        int st=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                if(i-st>=2 && st!=-1){
                    ans++;
                    st=i;
                }
                st=i;
            }
            if(s[i]=='0')
                continue;
            if(s[i]!='0' && s[i]!='1')
                st=-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
