#include<stdio.h>
#include<math.h>
#include<iostream>
#define LL long long
using namespace std;
LL n,k,arr[100005],indx[100005];
int main()
{
    cin>>n>>k;
    for(LL i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        indx[arr[i]]=i;
    }
    LL j=n;
    LL counter=0;
    for(LL i=0;i<n&&counter!=k;)
    {
        if(indx[j]!=i)
        {
            LL temp_d=arr[i],temp_i1=indx[arr[i]],temp_i2=indx[j];
            arr[i]=arr[indx[j]];
            arr[indx[j]]=temp_d;
            indx[j]=temp_i1;
            indx[temp_d]=temp_i2;
            i++;
            j--;
            counter++;
        }
        else
        {
            j--;
            i++;
        }
    }
    for(LL i=0;i<n;i++)
        printf("%lld ",arr[i]);
    return 0;
}
