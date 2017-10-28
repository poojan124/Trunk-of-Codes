#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long int lc=0,rc=0;
long int sol(long int ar[],long int n,long int ls,long int rs,long int first,long int last)
{
    if(rs==0)
        return n-1;
    if(rs%2==1)
        return 0;
    if(first==last)
        return 0;
    if(first-last==-1)
        return ar[first]==ar[last]?1:0;
    long int i,j,flag=0;
    for(i=first;i<=last && (ls+rs)%2==0;i++){
        ls=ls+ar[i];
        rs=rs-ar[i];
        if(ls==rs){
            lc=1+sol(ar,n,0,rs,first,i);
            rc=1+sol(ar,n,0,rs,i+1,last);
            flag=1;
        }
    }
    if(flag==1)
        return lc>rc?lc:rc;
    else
        return 0;
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int i,n,flag=0,ar[50000]={0},sum=0,leftsum=0,temp,j,rightsum,leftcount=0,rightcount=0,total=0;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%ld",&ar[i]);
            sum=sum+ar[i];
        }
        printf("%ld\n",sol(ar,n,0,sum,0,n-1));
    }
    return 0;
}
