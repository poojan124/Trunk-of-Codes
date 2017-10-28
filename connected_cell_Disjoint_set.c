#include<stdio.h>
#include<math.h>

int n,m,ar[120],counter[120],par[120];
bool find(int a,int b);
int main()
{
    int i,j,temp;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m*n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=1;i<=m*n;i++)
    {
        if(ar[i]==1)
            par[i]=i;
        counter[i]=0;
    }
    for(i=1;i<=m*n;i++)
    {
        if(ar[i]==1)
        {
            if(i==1)
            {
                counter[i]=1;
                par[i]=i;
            }
            else if()
            else if(i%n==1)
            {

            }
            else if(i<m&&i!=1)
            {

            }
            else if(i%m==0)
        }
    }
    return 0;
}
