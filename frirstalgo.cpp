#include<stdio.h>
#include<iostream>
using namespace std;

int sum(int n,int a[])
{
int ans=0;
for(int j=0;j<n;j++)
{
ans=ans+a[j];
}
return ans;
}

int main()
{
int j,ans;
cout<<"Enter the number of integers you want add"<<endl;
cin>>j;
int a[j];
    for(int i=0;i<j;i++)
    {
        cin>>a[i];
    }
ans=sum(j,a);
cout<<"Answer is = "<<ans;
}
