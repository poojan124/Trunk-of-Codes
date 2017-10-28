#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
long long int gcd(long long int a,long long int b){
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}
long long int lcm(long long int a,long long int b){
    return (a/gcd(a,b))*b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int m,n,gcd_m_n,lcm_m_n;
        scanf("%lld %lld",&m,&n);
        gcd_m_n=gcd(m,n);
        lcm_m_n=(m*n)/gcd_m_n;
        //cout<<lcm_m_n<<" "<<gcd_m_n<<endl;
        long long int k=lcm_m_n/gcd_m_n;
        if((lcm(k,m)==lcm_m_n) && (lcm(k,n)==lcm_m_n)){
            printf("%lld\n",k);
        }
        else{
            long long int temp1 = lcm(k,m);
            long long int temp2 = lcm(k,n);
            //cout<<temp1<<" "<<temp2<<" lcm :"<<lcm_m_n<<" k: "<<k<<endl;
            if(temp1!=lcm_m_n)
                k=(lcm_m_n/temp1)*k;
            else
                k=(lcm_m_n/temp2)*k;
            printf("%lld\n",k);
        }
    }
    return 0;
}
