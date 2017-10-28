#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
   while(t--){
        string s;
        cin >> s;
        vector<char> v(s.begin(),s.end());
        vector<char> :: iterator it;
        vector<char> :: iterator it2;
        vector<char> :: iterator it1;
        int cnt=0;
        for(it=v.begin();it!=v.end();it++){
            if(v.size()==cnt||v.size()==0)
                break;
            char tn=*it;
            cnt++;
            it2=it;
            it2++;
            for(;it2!=v.end();){
                if(tn==(*it2)){
                    v.erase(it2);
                }
                else{
                    it2++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

