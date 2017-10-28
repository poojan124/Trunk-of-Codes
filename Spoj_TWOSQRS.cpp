#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
long long ar[1000005]={0};
bool is_cheack(long long n){
    double val;
    long long temp=sqrt(n);
    val=sqrt(n);
    if(val==temp)
        return  true;
    else
        return false;
}
int main()
{
    int t;
    long long c,k;
    //for(c=0;c<=1000000;c++)
      //  ar[c]=c*c;
    scanf("%d",&t);
    while(t--)
    {
        long long flag=0,sum=0,n,temp,i,j;
        scanf("%lld",&n);
        temp=sqrt(n);
        for(i=0;i<=temp;i++)
        {
            long long temp1=n-(temp*temp);
            if(is_cheack(temp1))
            {
                printf("Yes\n");
                flag=1;
                break;
            }
            temp--;
        }
        if(flag==0)
            printf("No\n");
    }
    return 0;
}
