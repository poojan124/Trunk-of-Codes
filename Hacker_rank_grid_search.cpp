#include<stdio.h>
#include<iostream>
#define max1 1001
using namespace std;
int grid1[max1][max1],grid2[max1][max1];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int r,c,flag=0;
        scanf("%d %d",&r,&c);
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                scanf("%d",&grid1[i][j]);
        int R,C;
        scanf("%d %d",&R,&C);
        for(int i=0;i<R;i++)
            for(int j=0;j<C;j++)
                scanf("%d",&grid2[i][j]);
        for(int i=0;i<r-R;i++)
        {
            for(int j=0;j<c-C;j++)
            {
                if(grid1[i][j]==grid2[0][0]){
                        printf("Enter here somtime\n");
                    int ans=0;
                    for(int x=0;x<R;x++){
                        for(int y=0;y<C;y++){
                            if(grid1[i+x][j+y]!=grid2[x][y])
                                ans=-1;
                        }
                    }
                    if(ans==0){
                        printf("Yes");
                        flag=1;
                        break;
                    }
                    else
                        continue;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==0)
            printf("No\n");
    }
}
