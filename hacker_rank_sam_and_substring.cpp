#include<stdio.h>
#include<iostream>
#include<math.h>
#define m 1000000007
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long r=0;
    long long multiplier=1;
    for(long long i=s.length()-1;i>=0;i--)
    {
        r=(r+(s[i]-48)*multiplier*(i+1))%m;
        multiplier=((multiplier*10)+1)%m;
    }
    cout<<r;
}
