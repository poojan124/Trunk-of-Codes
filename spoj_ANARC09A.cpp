#include<bits/stdc++.h>
using namespace std;
int main()
{
    string temp;
    int a=1;
    cin>>temp;
    while(temp[0]!='-'){
        int cnt=0;
        vector<char> v(temp.begin(),temp.end());
        vector<char> st;
        for(vector<char>::iterator it=v.begin();it!=v.end();it++){
            if(*it=='{'){
                st.push_back(*it);
            }
            else{
                int f=0;
                if(st.empty()!= true){
                    if(st.back()=='{'){
                        st.pop_back();
                        f=1;
                    }
                }
                if(f==0){
                    st.push_back(*it);
                }
            }
            //cout<<st.size()<<endl;
        }
        if(st.size()!=0){
            for(int i=0;i<st.size();i+=2){
                if(st[i]=='}'&&st[i+1]=='{'){
                    cnt=cnt+2;
                }
                else{
                    cnt++;
                }
            }
        }
        cout<<a<<". "<<cnt<<endl;
        a++;
        cin>>temp;
    }
}
