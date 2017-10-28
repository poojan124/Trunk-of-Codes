#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    vector<string> v;
    v.push_back("a");
    v.push_back("aa");
    v.push_back("aab");
    v.push_back("aabb");
    while(n>4){
        s+=v[3];
        n-=4;
    }
    s+=v[n-1];
    cout<<s<<endl;
    return 0;
}
