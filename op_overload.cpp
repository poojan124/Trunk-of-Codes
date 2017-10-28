#include<stdio.h>
#include<iostream>
using namespace std;
class temp
{
    public:
        int counter=0;
        int t[10];
        friend istream & operator >> (istream &,temp &n);
};
istream & operator >>(istream &is,temp &n)
{
        int i;
        for(i=0;i<3;i++)
        {
            is>>n.t[i];
        }
        return is;
}
int main()
{
    int ar[10],i;
    temp n;
    cin>>n;
    for(i=0;i<3;i++)
    {
        cout<<n.t[i]<<endl;
    }
    return 0;
}
