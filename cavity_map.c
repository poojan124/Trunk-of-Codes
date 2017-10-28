#include<stdio.h>
int main()
{
    int n,i,j;
    char a[101][101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
        getchar();
    }
    for(i=1;i<=n-2;i++)
    {
        for(j=1;j<=n-2;j++)
        {
            int temp = (int)a[i][j]-48;
            int comp1,comp2,comp3,comp4;
            comp1=(int)a[i+1][j]-48;
            comp2=(int)a[i][j+1]-48;
            comp3=(int)a[i-1][j]-48;
            comp4=(int)a[i][j-1]-48;
            if((temp>comp1)&&(temp>comp2)&&(temp>comp3)&&(temp>comp4))
            {
                a[i][j]='X';
            }
        }
    }
    for(i=0;i<n;i++)
    {
            printf("%s",a[i]);
            printf("\n");
    }
    /*printf("%c",a[2][2]);*/
}
