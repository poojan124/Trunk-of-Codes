#include<iostream>
#include<stdio.h>
using namespace std;
long long int fact(long long int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    printf("%lld",fact(9));
}
