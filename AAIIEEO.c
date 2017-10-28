#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int dollor,noofflavour,prize[10001]={0};
    int ans,i,j;
    scanf("%d\n",&dollor);
    scanf("%d\n",&noofflavour);
    for(i=0;i<noofflavour;i++)
    {
        scanf("%d\n",&prize[i]);
    }
    for(i=0;i<noofflavour;i++)
    {
        for(j=1;j<noofflavour;j++)
        {
            ans=prize[i]+prize[j];
            if(ans==dollor)
            {
                printf("%d %d",prize[i],prize[j]);
                break;
            }
        }
    }
    return 0;
}
