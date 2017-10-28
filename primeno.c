#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int i,t,stop,a,b,c,countz=0,b1;
    scanf("%lld",&stop);
    for(t=0;t<stop;t++)
    {
        scanf("%lld %lld",&a,&b);
        if ( a <= 2 )
        {
            printf("2\n");
        }
        b1=a;
        for (countz=a; countz<=b;countz++)
        {
            for ( c = 2 ; c <=b1-1 ; c++ )
        {
            if ( b1%c == 0 )
            break;
        }
        if ( c == b1 )
        {
            printf("%lld\n",b1);

        }
        b1++;
    }
    }
    return 0;
}
