#include<stdio.h>
#include<math.h>
#define max 1000005
long long int prime[max],div[max]={0};
void sieve()
{
    long long int i,j,count=0;
    for(i=0;i<max;i++)
        prime[i]=1;
    for(i=2;i*i<=max;i++)
    {
        if(prime[i]==1)
        {
            for(j=2*i;j<=max;j+=i)
                prime[j]=0;
        }
    }
    prime[0]=0;
    prime[1]=0;
}
int  main()
{
    long long int q,i;
    sieve();
    for(i=0;i<=1000000;i++)
    {
        long long int sum=0,digit,temp;
        temp=i;
        sum=i;
        while(temp>0)
        {
            sum=sum+temp%10;
            temp=temp/10;
        }
        div[sum]=1;
    }
    scanf("%lld",&q);
    while(q--)
    {
        long long int a,b,count=0;
        scanf("%lld %lld",&a,&b);

        for(i=a;i<=b;i++)
        {
            printf("%lld %lld\n",prime[i],div[i]);
            if(prime[i]==1&&div[i]==0)
                count++;
        }
        printf("%lld\n",count);
    }
    return 0;
}
