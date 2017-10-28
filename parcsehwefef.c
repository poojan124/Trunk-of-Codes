#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    long long int a,b,arr[100000]={0},z=1,i,j=0,c,countno=0,ans[100000]={0},t,stop;
    scanf("%lld",&stop);
    for(t=0;t<stop;t++){
    scanf("%lld %lld",&a,&b);
    for(i=a;i<=b;i++)
    {
        ans[j]=i;
        c=sqrt(ans[j]);
        if((ans[j])%c==0)
        {
            countno++;
        }
        j++;
    }
    printf("%lld\n",countno);
    countno=0;
    }
    countno=0;
    return 0;
}
