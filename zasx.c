#include<stdio.h>

int main()
{
   long long int n,countz=0, c,a,b,b1,a1;
   scanf("%lld %lld",&a,&b);

   if ( a <= 2 )
   {
      printf("2\n");
   }
   b1=a;
   a1=2;
   for (countz=a; countz<=b;countz++)
   {
      for ( c = 2 ; c <=b1-1 ; c++)
      {
         if ( b1%c == 0 )

            break;
      }
      if ( c == b1 )
      {
         printf("%lld\n",b1);

      }
      b1++;
      a1++;
   }

   return 0;
}
