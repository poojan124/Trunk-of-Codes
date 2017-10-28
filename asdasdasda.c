#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a,b,c,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d %d %d",&a,&b,&c);
    if(a==b)
    {
        if(a==c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        if(a==c || b==c)
        {
            printf("YES\n");
        }
        else if(a>b && a%b==0)
        {
            printf("NO\n");
        }
        else if(a<b && b%a==0)
        {
            printf("NO\n");
        }
        else if(a<c && b<c)
        {
            printf("NO\n");
        }
        else if(a>c || b>c && a%b!=0 || b%a!=0)
        {
            printf("YES\n");
        }

    }

    }
return 0;
}
