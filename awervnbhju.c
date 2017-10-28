#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[1001];
    int i,j,countac=0,lenstr;
    gets(str);
    lenstr=strlen(str);
    for(i='a';i<='z';i++)
    {
        for(j=0;j<lenstr;j++)
        {
            if(str[j]==i)
            {
                str[j]='o';
            }
        }
    }
    for(i=0;i<lenstr;i++)
    {
        if(str[i]!='o')
        {
            countac++;
        }
        else
        {
            continue;
        }
    }
    if(countac>=2)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    printf("\n\n%s",str);
    return 0;
}
