#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char name[1000],i,j;
    do
    {
        scanf("%c",&name[i]);
        i++;
    }
    while(name!='.');
    printf("\n");
    for(j=0;j<1000;j++)
    {
        printf("%c",name[j]);
    }
  return 0;
}
