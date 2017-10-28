#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    ofstream fo;
    fo.open("output1.txt");
    string ch[5];
    for(i=0;i<5;i++)
    {
        cin>>ch[i];
        fo<<ch[i]<<endl;
    }
}
