#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,te;
    te=scanf("%d",&t);
    while(t--)
    {
        int n,ar[1001]={0},i,j,temp,a,b,c,ans=101,l;
        temp=scanf("%d",&n);
        for(i=0;i<n;i++)
            temp=scanf("%d",&ar[i]);
        for(j=0;j<2*n;j++)
        {
            for(i=0;i<n-2;i++)
            {

                    a=ar[i];
                    b=ar[i+1];
                    c=ar[i+2];

                if(a<b&&b<c)
                {
                    //printf("second one i %d j %d\n",i,j);
                    continue;
                }
                else if(a<b&&b>c&&b>a)
                {
                    ar[i]=c;
                    ar[i+1]=a;
                    ar[i+2]=b;
                }
                else if(a>b&&b<c&&a>c)
                {
                    ar[i]=b;
                    ar[i+1]=c;
                    ar[i+2]=a;
                }
                /**printf("i=%d j=%d ",i,j);
                for(l=0;l<n;l++)
                	printf("%d ",ar[l]);
                printf("\n");**/
            }
        }
        for(i=0;i<n;i++)
        {
            if(ar[i]==i+1)
                continue;
            else
            {
                ans=-101;
                break;
            }
        }
        if(ans==-101)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
