#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    char str1[111111],str2[111111];
    int i,j,lenstr1,lenstr2,t,n,flag[2];
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
                    flag[t]=1;
                    break;
                }
            }
            if(str1[i]==str2[j])
            {
                break;
            }
            else
            {
                flag[t]=0;
                break;
            }
        }
    }
    for(t=0;t<n;t++)
    {
        if(flag==1)
        {
            printf("YES");
        }
        if(flag==0)
        {
            printf("NO");
        }
    }
    return 0;
}
