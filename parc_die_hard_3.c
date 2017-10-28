#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a[10001]={0},b[10001]={0},c[10001]={0};
    int i=0,j=0,n,flag[10001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
          scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for(i=0;i<n;i++)
    {

        if(a[i]==b[i])
        {
            if(a[i]==c[i])
            {
                flag[i]=1;
            }
            else
            {
                flag[i]=0;
            }
        }
        else
        {
            if(a[i]==c[i] || b[i]==c[i])
            {
                flag[i]=1;
            }
            else if(a[i]>b[i] && a[i]%b[i]==0)
            {
                flag[i]=0;
            }
            else if(a[i]<b[i] && b[i]%a[i]==0)
            {
                flag[i]=0;
            }
            else if(a[i]<c[i] && b[i]<c[i])
            {
                flag[i]=0;
            }
            else if(a[i]>c[i] || b[i]>c[i] && a[i]%b[i]!=0 || b[i]%a[i]!=0)
            {
                flag[i]=1;
            }
        }

    }
    for(j=0;j<n;j++);
    {
        if(flag[j]==1)
        {
            printf("YES");
        }
        if(flag[j]==0)
        {
            printf("YES");
        }
    }
    return 0;
}
