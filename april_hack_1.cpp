#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str;
    vector<char> v;
    cin>>str;
    int j=0;

   // v.push_back('\0');
    for(int c=0;c<str.length();c++)
        v.push_back(str[c]);
    for(int i=0;i<str.length();i++)
        {
        int flag=0;
        //cout<<v.size()<<"length"<<str.length()<<endl;
        for(int j=0;j<v.size()-1&&(v.size()>1);)
        {
            //cout<<"here"<<j<<j+1<<v.size()<<endl;
            //cout<<"here also"<<endl;
            if(v[j]==v[j+1])
            {
             //   cout<<"here"<<j<<j+1<<v.size()<<endl;
             //cout<<v[j]<<" "<<v[j+1]<<endl;
                v.erase(v.begin()+j);
                v.erase(v.begin()+j);
            }
            else
                j++;

            if(v.size()==0||v.size()==1)
                flag=1;
        }
        if(flag==1)
            break;
    }
    if(v.size()!=0)
    {
        //cout<<v.size();
        for(int i=0;i<v.size();i++)
          {
             //if(v[i]!='\0')
                cout<<v[i];
          }
    }
    else
        {
        cout<<"Empty String";
    }
    return 0;
}
