#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a;
    cin>>a;
    if(a%2==1){
        long long k=(a-1)/2;
        printf("%lld %lld %lld",a,2*k*(k+1),((k+1)*(k+1))+(k*k));
    }
    else{
       printf("%lld %lld %lld",a,((a/2)*(a/2))-1,((a/2)*(a/2))+1);
    }
    return 0;
}
