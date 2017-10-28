#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,m,temp,val[255];
    int i, j, x, y;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
        scanf("%d",&val[i]);
    int table[n+1][m];
    for (i=0; i<m; i++)
        table[0][i] = 1;
    for (i = 1; i < n+1; i++)
    {
        for (j = 0; j < m; j++)
        {
            x = (i-val[j] >= 0)? table[i - val[j]][j]: 0;
            y = (j >= 1)? table[i][j-1]: 0;
            //printf("%d %d\n",x,y);
            table[i][j] = x + y;
        }
    }
    /*for(i=1;i<n+1;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",table[i][j]);
        }
        printf("\n");
    }*/
    printf("%d",table[n][m-1]);
    return 0;
}
