#include<iostream>
using namespace std;

int Factorial(int n)
{
    if(n==1)
    return 1;
    else
    return n*Factorial(n-1);
}

int main()
{
int n,ans=1;
cout<<"Enter the number"<<endl;
cin>>n;
ans=Factorial(n);
cout<<"Answer is = "<<ans;
}
