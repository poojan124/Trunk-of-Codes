#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
template<class t> t _min(t a,t b){return a<b?a:b;}
template<class t> t _min(t a,t b,t c){return (a<b?(a<c?a:c):(b<c?b:c));}
template<class t> t _max(t a,t b){return a>b?a:b;}
template<class t> t _max(t a,t b,t c){return (a>b?(a>c?a:c):(b>c?b:c));}
void arr_reader(int *arr,int n){for(int i=0;i<n;i++)scanf("%d",&arr[i]);};
void arr_reader(long int *arr,long int n){for(long int i=0;i<n;i++)scanf("%ld",&arr[i]);};
void arr_reader(long int *arr,long long int n){for(long long int i=0;i<n;i++)scanf("%lld",&arr[i]);};
void arr_reader(char *arr,int n){for(int i=0;i<n;i++)scanf("%c",&arr[i]);};
void arr_reader(string *arr,int n){for(int i=0;i<n;i++)cin>>arr[i];};
int main()
{

    return 0;
}
