#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
     int a[10000],b[10000],c[10000];
     int i,k,flage[100000];
    scanf("%d",&k);
    for(i=0;i<=k;i++)
    {
    scanf("%d %d %d",&a[i],&b[i],&c[i]);
    if(a[i]==b[i] && b[i]==c[i])
    {
        flage[i]==1;
        break;
    }
    if(a[i]==b[i] && a[i]!=c[i])
    {
        flage[i]==0;
        break;
    }
    if(a[i]<c[i] && b[i]<c[i])
    {
        flage[i]==0;
        break;
    }
    if(a[i]>c[i] || b[i]>c[i])
    {
        if(a[i]>b[i] && a[i]%b[i]==0)
        {
            flage[i]==0;
            break;
        }
        if(b[i]>a[i] && b[i]%a[i]==0)
        {
            flage[i]==0;
            break;
        }
        else
        {
             flage[i]==1;
             break;
        }
    }
    }
    for(i=0;i<k;i++)
    {
        if(flage[i]==1)
        {
            printf("YES");
        }
        if(flage[i]==0)
        {
            printf("NO");
            break;
        }
    }

    return 0;

}
