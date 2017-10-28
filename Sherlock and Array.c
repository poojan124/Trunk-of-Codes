#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    long long int n,no[200002],sum1=0,sum2=0,c,j,i,z;
    int countno=0,t,stop;
    scanf("%d\n",&stop);
    for(t=0;t<stop;t++)
    {
    scanf("%lld\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&no[i]);
    }
    c=n-1;
    for(i=0;i<c;i++)
    {
        for(j=i+2;j<n;j++)
        {
            sum1=sum1+no[j];

        }
        for(z=0;z<i+1;z++)
        {
            sum2=sum2+no[z];

        }
        if(sum1==sum2)
        {
            countno++;
            break;
        }
        sum1=0;sum2=0;
    }
    if(n==1)
    {
        printf("YES\n");
    }
    else if(countno==1)
    {
        printf("YES\n");
    }
    else if(countno==0)
    {
        printf("NO\n");
    }
    countno=0;
    }
    return 0;
}
