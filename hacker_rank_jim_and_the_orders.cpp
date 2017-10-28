#include<vector>
#include<algorithm>
#include<map>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long int n;
    multimap<long int,long int> m;
    scanf("%ld",&n);
    for(long int i=1;i<=n;i++)
    {
        long int a,b;
        cin>>a>>b;
        pair<int ,int> p;
        p.first=a+b;
        p.second=i;
        m.insert(p);
    }
    multimap<long int,long int> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->second<<" ";
    }
    return 0;
}
