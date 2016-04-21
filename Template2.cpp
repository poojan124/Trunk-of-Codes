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
template<class t,class u>void arr_reader(t *arr,u n){for(u i=0;i<n;i++)cin>>arr[i];};
int main()
{

    return 0;
}
