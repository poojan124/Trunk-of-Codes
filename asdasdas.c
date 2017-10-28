#include<stdio.h>
#include<string.h>
int main()
{
    int T,k;
    scanf("%d",&T);
    for(k=0;k<T;k++)
    {
        int m=0,n=0,i=0,j=0;
        int q=0,x1=0,y1=0,x2=0,y2=0,w=0;
        scanf("%d",&m);
        scanf("%d",&n);
        char a[m][n];
        for(i=0;i<m;i++)
        {
                scanf("%s",&a[i]);
        }
        printf(".............");
        scanf("%d",&q);
        for(w=0;w<q;w++)
        {
            scanf("%d",&x1);
            scanf("%d",&y1);
            scanf("%d",&x2);
            scanf("%d",&y2);

            if(strcmp("#",a[x1+1][y1+1])==0 && strcmp("#",a[x1][y1+1])==0 && strcmp("#",a[x1+1][y1])==0)
            {
                printf("Arrr!");
            }
            else if(strcmp("#",a[x1+1][y1+1])!=0 && strcmp("#",a[x1][y1+1])==0 && strcmp("#",a[x1+1][y1])==0)
            {
                a[x1+1][y1+1]="*";
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        printf("%c",a[i][j]);
                    }
                }
                x1=x1+1;y1=y1+1;
            }
            else if(strcmp("#",a[x1+1][y1+1])==0 && strcmp("#",a[x1][y1+1])!=0 && strcmp("#",a[x1+1][y1])==0)
            {
                a[x1][y1+1]="*";
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        printf("%c",a[i][j]);
                    }
                }
                y1=y1+1;
            }
            else if(strcmp("#",a[x1+1][y1+1])==0 && strcmp("#",a[x1][y1+1])==0 && strcmp("#",a[x1+1][y1])!=0)
            {
                a[x1+1][y1]="*";
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        printf("%c",a[i][j]);
                    }
                }
                x1=x1+1;
            }
            else if(strcmp("#",a[x1+1][y1+1])!=0 && strcmp("#",a[x1][y1+1])!=0 && strcmp("#",a[x1+1][y1])==0)
            {
                a[x1][y1+1]="*";
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        printf("%c",a[i][j]);
                    }
                }
                y1++;
            }
            else if(strcmp("#",a[x1+1][y1+1])==0 && strcmp("#",a[x1][y1+1])!=0 && strcmp("#",a[x1+1][y1])!=0)
            {
                a[x1+1][y1]="*";
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        printf("%c",a[i][j]);
                    }
                }
                x1++;
            }
            else if(strcmp("#",a[x1+1][y1+1])!=0 && strcmp("#",a[x1][y1+1])!=0 && strcmp("#",a[x1+1][y1])!=0)
            {
                a[x1+1][y1]="*";
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        printf("%c",a[i][j]);
                    }
                }
                x1++;
            }
        }
    }
    return 0;
}
