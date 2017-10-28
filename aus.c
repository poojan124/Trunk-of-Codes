#include<stdio.h>
#include<math.h>
int m,n,ar[12][12],par[12][12],counter[12][12];
int main()
{
    int i,j,temp;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&ar[i][j]);
    for(i=1;i<12;i++)
    {
        for(j=1;j<12;j++)
        {
            if(ar[i][j]==1)
            {
                par[i][j]=n*(i-1)+j;
            }
            counter[i][j]=0;
        }
    }
    /**for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++){
            printf("%d ",counter[i][j]);
        }
        printf("\n");
    }**/
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(ar[i][j]==1)
            {
                if(ar[i-1][j]==1)
                {

                }
                else if(ar[i-1][j-1]==1)
                {

                }
                else if(ar[i][j-1]==1)
                {

                }
                else if(ar[i][j-1]==1)
                {

                }
                else if(ar[i+1][j]==1)
                {

                }
                else if(ar[i][j+1]==1)
                {

                }
                else if(ar[i-1][j+1]==1)
                {

                }
                else if(ar[i+1][j-1]==1)
                {

                }
                else
                {
                    counter[i][j]=1;
                }
            }
        }
    }
}
