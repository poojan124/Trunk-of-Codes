#include<stdio.h>
#include<iostream>
#define m 1000000009
using namespace std;
long long po(long long a,long long b){
    long long res=1;
    while(b){
        if(b%2)
            res=(res*a)%m;
        a=(a*a)%m;
        b=b/2;
    }
    return res%m;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,count_z=0,count_n=0,count_p=0,max,flag_n=0;
        long long arr,ans=0,sum_p=0;
        scanf("%lld",&n);
        for(long long int i=0;i<n;i++){
            scanf("%lld",&arr);
            if(arr>0){
                sum_p=(sum_p+arr);
                count_p++;
            }
            else if(arr==0){
                count_z++;
            }
            else if(arr<0){
                count_n++;
                if(flag_n==0){
                    max=arr;
                    flag_n=1;
                    ans=1;
                }
                else if(flag_n==1){
                    if(arr>max){
                        max=arr;
                        ans=1;
                    }
                    if(arr==max)
                        ans++;
                }
            }
        }
        if(count_p>0){
            printf("%lld %lld\n",sum_p,po(2,count_z)%m);
        }
        else if((count_n+count_z)==n && count_z>0){
            printf("0 %lld\n",po(2,count_z)-1);
        }

        else if(count_n==n){
            printf("%lld %lld\n",max,ans%m);
        }
    }
    return 0;
}
