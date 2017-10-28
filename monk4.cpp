#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ans=0,final_ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            if(i==0)
                ans++;
            else if(s[i-1]=='a'||s[i-1]=='e'||s[i-1]=='i'||s[i-1]=='o'||s[i-1]=='u')
                ans++;
            else{
                final_ans=max(ans,final_ans);
                ans=1;
            }
        }
        else{
            final_ans=max(ans,final_ans);
            ans=0;
        }
    }
    final_ans=max(ans,final_ans);
    cout<<final_ans;
}
