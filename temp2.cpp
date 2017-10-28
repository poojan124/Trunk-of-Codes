#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,sum=0;
        scanf("%lld %lld",&n,&k);
        long long max=0;
        for(int j=0;j<k;j++){
            long long a[n];
            for(int c=0;c<n;c++)
                scanf("%lld",&a[c]);
            int s=0,e=n-1;
            for(int i=0;i<n/2;i++){
                if(a[s]>a[e])
                    sum=sum+a[s++];
                else
                    sum=sum+a[e--];
            }
            if(max<sum)
                max=sum;
        }
        printf("%lld",sum);
    }
}
