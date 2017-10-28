#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char tmp[s.length()+1];
    strcpy(tmp,s.c_str());
    int ans = ((s[0]-'0'+1)*pow(10,(s.length()-1)))-atoi(tmp);
    cout<<ans<<endl;
    return 0;
}
