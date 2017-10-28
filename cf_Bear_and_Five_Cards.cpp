#include<bits/stdc++.h>
#define all(c) c.begin,c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
#define tr(container, it) \
    for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

using namespace std;
int main()
{
    int max=0,t,sum=0;
    map<int,int> m;
    for(int i=0;i<5;i++){
        cin>>t;
        sum=sum+t;
        m[t]++;
    }
    tr(m,it){
        if(it->second==2||it->second==3){
            if((it->first)*(it->second)>max)
                max=(it->first)*(it->second);
        }
        if(it->second>3){
            max=(it->first)*3;
        }
    }
    cout<<sum-max;
}
