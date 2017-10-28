#include<stdio.h>
int main()
{
    long long int n,count=1;
    scanf("%lld",&n);
    while(n!=0)
    {
        long long int i,ans=1;
        if(n==1||n==2)
            printf("Case %lld, N = %lld, # of different labelings = 1\n",count,n);
        else
        {
            for(i=0;i<n-2;i++)
            {
                ans=ans*n;
            }
            printf("Case %lld, N = %lld, # of different labelings = %lld\n",count,n,ans);
        }
        scanf("%lld",&n);
        count++;
    }
    return 0;
}
