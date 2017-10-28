#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    long long int a,b,c,ans2=1,ans1=1,ans3=1,ans4,ans;
    int n,i,stop,t,z[20001]={0};
    scanf("%d",&stop);
    for(t=0;t<stop;t++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        n=a-b;
        for (i = 1; i <= a; i++)
        {
            ans1 = ans1* i;
        }
        for (i = 1; i <= b; i++)
        {
            ans2 = ans2 * i;
        }
        for (i = 1; i <=n ; i++)
        {
            ans3 = ans3 * i;
        }
        ans4=ans1/ans2;
        ans=ans4/ans3;
        z[t]=(int)ans%(int)c;
        ans2=1,ans1=1,ans3=1;

    }
        for(t=0;t<stop;t++)
        {

            printf("%d\n",z[t]);
        }

    return 0;
}
