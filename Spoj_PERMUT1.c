#include<stdio.h>
int dp[200][200];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,i,j,temp,jt,tc;
        scanf("%d %d",&n,&k);
        for(i=0;i<200;i++)
            for(j=0;j<200;j++)
                dp[i][j]=0;
        dp[1][0]=1;
        dp[2][0]=1;
        dp[2][1]=1;
        for(i=3;i<=n-1;i++)
        {
            int kt=(i)*(i-1)/2;
            for(j=0;j<=kt;j++)
            {
                tc=0;
                for(jt=j;jt>=0;jt--)
                {
                    tc++;
                    dp[i][j]+=dp[i-1][jt];
                    if(tc==i)
                        break;

                }
            }
        }
        if(n!=2)
        {
            tc=0;
            for(i=k;i>=0;i--)
            {
                tc++;
                dp[n][k]+=dp[n-1][i];
                if(tc==n)
                    break;
            }
        }
        printf("%d\n",dp[n][k]);
    }
}
