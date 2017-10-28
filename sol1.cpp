#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    long long s1= sqrt(a);
    long long s2= (sqrt(1+ 4*b)-1)/2;
    if(s1>s2)
        cout<<"Valera"<<endl;
    else
        cout<<"Vladik"<<endl;
    return 0;
}
