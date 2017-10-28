#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int dollor,noofflavour,prize[10001],i,j,z,t;
    int ans[999][999];
    scanf("%d",&z);
    for(t=0;t<z;t++)
    {
    scanf("\n%d\n",&dollor);
    scanf("\n%d\n",&noofflavour);
    for(i=0;i<noofflavour;i++)
    {
        scanf("%d",&prize[i]);

    }
     for(i=0;i<noofflavour;i++)
    {
            for(j=i+1;j<noofflavour;j++)
            {
                ans[i][j]=prize[i]+prize[j];
            }
            if(ans[i][j]=prize[i]+prize[j])
            {
                break;
            }

    }

    for(i=0;i<noofflavour;i++)
    {
        for(j=i+1;j<noofflavour;j++)
        {
            if(ans[i][j]==dollor)
            {
                printf("%d %d\n",i+1,j+1);
                break;
            }

        }

    }
    }

    return 0;
}
