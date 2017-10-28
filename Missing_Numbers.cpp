#include<stdio.h>
#include<limits.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int a,n,m,temp,x1[10005]={0},x2[10005]={0},i,j,max1=0,min1=99999999,max2=0,min2=99999999;
    a=scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        a=scanf("%lld",&temp);
        x1[temp]++;
        if(temp<min1)
            min1=temp;
        if(temp>max1)
            max1=temp;

    }
    a=scanf("%lld",&m);
    for(i=0;i<m;i++)
    {
       a= scanf("%lld",&temp);
        x2[temp]++;
        if(temp<min2)
            min2=temp;

        if(temp>max2)
            max2=temp;

    }
    //printf("%lld %lld %lld %lld\n",max1,max2,min1,min2);
    long long int lmax=max1,lmin=min1;
    if(max2>max1)
        lmax=max2;
    if(min2<min1)
        lmin=min1;
    //printf("%lld %lld\n",lmin,lmax);

    for(i=lmin;i<=lmax;i++)
    {
        //printf("%lld %lld\n",x1[i],x2[i]);
        if(x1[i]-x2[i]!=0)
        {
            printf("%lld ",i);
        }
    }
    return 0;
}
