#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[111111],ch, output[111111];
    int i,lenstr,countac=0,j,no[26] = {0}, n, c, t, x;
    gets(str);
    lenstr=strlen(str);



   for (c = 0; c < lenstr; c++)
   {
      ch = str[c] - 'a';
      no[ch]++;
   }
   t = 0;
   for (ch = 'a'; ch <= 'z'; ch++)
   {
      x = ch - 'a';

      for (c = 0; c < no[x]; c++)
      {
         output[t] = ch;
         t++;
      }
   }
   output[t] = '\0';
    for(i=0;i<111111;i++)
    {

        if(output[i]==output[i+1])
        {
            output[i]='o';
            output[i+1]='o';
        }
        else
        {
            continue;
        }
        if(i==(lenstr))
        {
            break;
        }
    }
    for(i=0;i<lenstr;i++)
    {
        if(output[i]!='o')
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
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}

