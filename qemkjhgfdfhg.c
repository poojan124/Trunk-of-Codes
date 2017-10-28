#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    char str1[111111],str2[111111];
    int i,j,lenstr1,lenstr2;
    gets(str1);
    gets(str2);
    lenstr1=strlen(str1);
    lenstr2=strlen(str2);
    for(i=0;i<lenstr1;i++)
    {
        for(j=0;j<lenstr2;j++)
        {
            if(str1[i]==str2[j])
            {
                printf("YES");
                break;
            }
        }
        if(str1[i]==str2[j])
        {
            break;
        }
        if(i==lenstr1)
        {
            printf("NO");
            break;
        }

    }
    return 0;
}
