#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n,d,h,ans=0,i;
        scanf("%d %d %d",&n,&m,&d);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&h);
            while(h>d)
            {
                    h=h-d;
                    ans++;
            }
        }
        if(ans>=m)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
