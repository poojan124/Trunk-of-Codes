#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    char str1[111111],str2[111111];
    int i,j,lenstr1,lenstr2,n,t,flag[2];
    scanf("%d",&n);
    for(t=0;t<n;t++)
    {
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
                    flag[t]=0;

                }

            }
            if(str1[i]==str2[j])
            {
                break;
            }
            else
            {
                flag[t]=1;
                break;
            }

        }
    }
        for(i=0;i<n;i++)
       {
            if(flag[i]==0)
            {
                printf("YES");
            }
            if(flag[i]==1)
            {
                printf("NO");
            }
        }
    return 0;
}

