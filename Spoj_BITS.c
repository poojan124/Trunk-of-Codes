/**BITS - Counting Bits**/
#include<stdio.h>
#include<math.h>
int main()
{
    int t,j,arr[2001],i,temp,is;
    scanf("%d",&t);
    arr[1]=1;
    arr[0]=0;
    for(i=2;i<=1000;i=i*2)
    {
        is=0;
        for(j=i;j<i*2;j++)
        {
            arr[j]=arr[is]+1;
            is++;
        }
    }
    while(t--)
    {
        int n,ans=0,in;
        scanf("%d",&n);
        for(in=0;in<=n;in++)
        {
            ans=ans+arr[in];
        }
        printf("%d\n",ans);
    }
}
