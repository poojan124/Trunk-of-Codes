#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<strings.h>
int main()
{
    long long int no,ans,exp;
    int i,countno=0,digit,test,stop;
    scanf("%d",&stop);
    for(test=0;test<stop;test++)
    {
        scanf("%lld",&no);
        exp=no;
        do
        {
            digit=exp%10;
            if(digit>0)
            {
                if(no%digit==0)
                {
                    countno++;
                }
            }

            exp=exp/10;
        }
        while(exp!=0);
        printf("%d\n",countno);
        countno=0;
    }
    return 0;
}
