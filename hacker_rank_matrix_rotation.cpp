//change:
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
int main()
{
    long int arr[400][400],ans[400][400],r,m,n;
    scanf("%ld %ld %ld",&m,&n,&r);
    r=r%(2*(m+n-2));
    for(long int i=0;i<m;i++)
    {
        for(long int j=0;j<n;j++)
        {

            ans[i][j]=;
        }
    }
    return 0;
}
