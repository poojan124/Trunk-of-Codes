#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,sum=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int cnt=0,i=0,j=n-1;
        while(cnt!=n){
            if(cnt==n-1)
                break;
            if(a[i]*a[i+1]>=a[j]*a[j-1] ){
                if(a[i]*a[i+1]>a[i]+a[i+1])
                    sum=sum + a[i]*a[i+1];
                else
                    sum=sum +a[i]+a[i+1];
                i+=2;
            }
            else{
                if(a[j]*a[j-1]>a[j]+a[j-1])
                    sum=sum + a[j]*a[j-1];
                else
                    sum=sum +a[j]+a[j-1];
                j-=2;
            }
            cnt+=2;
        }
        if(n%2==1){
            sum=sum+a[j];
        }
        printf("%d\n",sum);
    }
}
