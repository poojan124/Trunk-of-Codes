#include<stdio.h>
#include<math.h>
#include<iostream>
#define m 1000000007
using namespace std;
int main()
{
    long int q;
    scanf("%ld",&q);
    while(q--)
    {
        long long int part4,part5,temp,part1,part2,part3,l,r,sum1=0,sum2=0,sum3=0,sum4=0,sum5;
        scanf("%lld %lld",&l,&r);
        temp=l-1;
        sum5=(4*(r-l+1))%m;
        part1=(15*r)%m;
        part2=(r+1)%m;
        part3=((2*r)+1)%m;
        part4=(part1*part2)%m;
        part5=(part4*part3);
        sum1=part5/6;
        printf("%lld\n",sum1);

        part1=(15*temp)%m;
        part2=(temp+1)%m;
        part3=((2*temp)+1)%m;
        part4=(part1*part2)%m;
        part5=(part4*part3);
        sum2=part5/6;
        printf("%lld\n",sum2);

        part1=(4*r)%m;
        part2=(r+1)%m;
        part4=(part1*part2);
        sum3=part4/2;
        printf("%lld\n",sum3);

        part1=(4*temp)%m;
        part2=(temp+1)%m;
        part4=(part1*part2);
        sum4=part4/2;
        printf("%lld\n",sum4);
        //printf("%lld %lld %lld %lld %lld\n",sum1,sum2,sum3,sum4,sum5);
        printf("%lld\n",(((sum1-sum2)%m)+((sum3-sum4)%m)-sum5)%m);
    }

}
