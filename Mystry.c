#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    char name[10001];
    int a,b,i,j,len,t,stop,countz=0,x;
    scanf("%d\n",&stop);
    for(t=0;t<stop;t++){

    gets(name);
    len=strlen(name);
    x=len-1;
    if(len%2==0)
    {
        for(j=0;j<(len/2);j++)
        {

            a=name[j];
            b=name[x];
                countz=countz+abs(a-b);
                x--;
                a=0;
                b=0;
            }
        }
         else if(len%2==1)
        {
            for(j=0;j<((len-1)/2);j++)
            {
                a=name[j];
                b=name[x];
                countz=countz+abs(a-b);
                x--;
                a=0;
                b=0;

            }

        }
    printf("%d\n",countz);
    countz=0;

    }
    return 0;
}
