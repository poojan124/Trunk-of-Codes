#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    long long int n,i,j;
    int flag=0;
    long long int ans,ans1;
    scanf("%lld",&n);
    long long int temp,m;
    temp=n;
    for(i=(n/3)+1;i<(n/2);i++)
    {
        temp=n-i;
        ans1=i*i;
        //printf("%lld \n",i);
        for(j=1;j<=temp/2;j++)
        {
            m=temp-j;
            ans=(m*m)+(j*j);
            //printf("m = %lld j = %lld\n",m,j);
            //printf("%lld %lld \n",ans,ans1);
            if(ans1==ans)
            {

                   printf("%lld\n",m*i*j);
                   flag=1;
                   break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
        printf("-1\n");
}
return 0;
}
