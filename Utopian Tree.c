#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int no,i,ans=1,t,stop;
    scanf("%d\n",&stop);
    for(t=0;t<stop;t++)
    {

    scanf("%d\n",&no);
    for(i=1;i<=no;i++)
    {
        if(i%2==1)
        {
            ans=ans*2;
        }
        else if(i%2==0)
        {
            ans=ans+1;
        }
    }
    printf("%d\n",ans);
    ans=1;
    }
    return 0;
}
