#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b)
    {
        if(a==c)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        if(a==c || b==c)
        {
            printf("YES");
        }
        else if(a>b && a%b==0)
        {
            printf("NO");
        }
        else if(a<b && b%a==0)
        {
            printf("NO");
        }
        else if(a<c && b<c)
        {
            printf("NO");
        }
        else if(a>c || b>c && a%b!=0 || b%a!=0)
        {
            printf("YES");
        }
        return 0;
    }
}
