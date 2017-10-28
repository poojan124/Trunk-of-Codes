#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0,i=0,temp;
        cin>>n;
        while(sum<n)
        {
            i=i+5;
            temp=i;
            while((temp/5)%5 == 0)
            {
                sum=sum+1;
                temp=temp/5;
            }
            sum=sum+1;
        }
        cout<<i<<endl;
    }
    return 0;
}
