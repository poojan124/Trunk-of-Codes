#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    int arr[500005]={0};
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(arr[n]!=0)
            printf("%d\n",arr[n]);
        else{
            int sum=0,temp=sqrt(n);
            for(int i=1;i<=temp;i++){
                if(n%i==0){
                    if((n/i)==i){
                        sum=sum+i;
                    }
                    else{
                        sum=sum+(n/i)+i;
                    }
                }
            }
            arr[n]=sum-n;
            printf("%d\n",sum-n);
        }
    }
    return 0;
}
