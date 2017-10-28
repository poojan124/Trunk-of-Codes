#include<stdio.h>
#include<limits.h>
#include<string.h>
int main()
{
    char s[100005],ans[100005],temp;
    long long int n,length,i,k;
    scanf("%lld",&n);
    scanf("%s",&s);
    length=strlen(s);
    //printf("length is = %d\n",length);
    for(i=0;i<length;i=i+2)
    {
        //printf("enter THIS! %d\n",i);
        int tp[3]={0};
        int a[5]={-1,-1,-1,-1,-1};
        a[s[i]-64]=0;
        a[s[i+1]-64]=0;
        int j=1;
        for(k=1;k<=4;k++)
        {
            //printf("%d ",a[i]);
            if(a[k]!=0)
            {
                tp[j]=k;
                j++;
            }
        }
        //printf("%d %d\n",tp[1],tp[2]);
        if(ans[i-1]==64+tp[1])
        {
            //printf("enter here1\n");
            ans[i]=64+tp[2];
            ans[i+1]=64+tp[1];
            //printf("%c%c",ans[i],ans[i+1]);
        }
        else
        {
            //printf("enter here2\n");
            ans[i]=64+tp[1];
            ans[i+1]=64+tp[2];
            //printf("%c%c",ans[i],ans[i+1]);
        }
    }
    ans[length]='\0';
    printf("%s",ans);
    return 0;
}
