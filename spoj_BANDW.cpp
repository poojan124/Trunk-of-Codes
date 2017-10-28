#include<bits/stdc++.h>
#define all(c) c.begin,c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
#define tr(container, it) \
    for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    while(s1!="*"){
        string s3;
        int ans=0,i;
        for(i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                s3=s3+'1';
            }
            else{
                s3=s3+'0';
            }
        }

        for(i=0;i<s1.length()-1;i++){
            if(s3[i]=='1'&&s3[i+1]=='0'){
                ans++;
            }
        }
        if(s3[s2.length()-1]=='1'&&s2.length()!=1)
            ans++;
        if(ans==0&&s3[0]=='1')
            ans++;

        cout<<ans<<endl;
        cin>>s1>>s2;
    }
}
