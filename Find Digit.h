#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<strings.h>
int main()
{
    long long int no,ans,exp;
    int i,countno=0,digit;
    scanf("%lld",&no);
    exp=no;
    do
    {
        digit=exp%10;
        if(no%digit==0)
        {
            countno++;
        }
        exp=exp/10;
    }
    while(exp!=0)
    printf("%d",countno);
    return 0;
}
