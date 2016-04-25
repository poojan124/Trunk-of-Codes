#include<bits/stdc++.h>
#define l long int
#define ll long long int
using namespace std;
l bs(l ar[],l n,l c)
{
    l start=0,end=ar[n-1],max=-1;
    while(end>start){
        l mid=(start+end)/2,flag=0;
        l count=1,val=ar[0];
        for(l i=1;i<n;i++){
            if((ar[i]-val)>=mid){
                val=ar[i];
                count++;
                if(count==c)
                    flag=1;
            }
            if(flag==1)
                break;
        }
        if(flag==0)
           end=mid;
        else{
            if(mid>max)
                max=mid;
            start=mid+1;
        }
    }
    return max;
}
int main()
{
    l t;
    scanf("%ld",&t);
    while(t--){
        l ar[100005],n,c;
        scanf("%ld %ld",&n,&c);
        for(l i=0;i<n;i++){
            scanf("%ld",&ar[i]);
        }
        sort(ar,ar+n);
        printf("%ld\n",bs(ar,n,c));
    }
    return 0;
}
