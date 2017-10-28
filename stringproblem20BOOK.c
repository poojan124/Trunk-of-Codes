#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char name[1000],i;
    for(i=0;i<1000;i++)
    {
        scanf("%c",&name[i]);
        if(name[i]=='.')
        {
            break;
        }
    }
    printf("\n Your text is here");
    for(i=0;i<1000;i++)
    {
        printf("%c",name[i]);
        if(name[i]=='.')
        {
            break;
        }
    }
  return 0;
}
