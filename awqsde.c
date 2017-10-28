#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char name[1000],i=0,j;
    while(name[i]!='.')
    {
        scanf("%s",&name[i]);
        i++;
    }
    printf("\n");
    for(j=0;j<1000;j++)
    {
        printf("%s",name[j]);
    }
  return 0;
}
