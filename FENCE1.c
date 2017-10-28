#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        double ans,pi=3.1415926;
        ans=pow(t,2)/(pi*2);
        printf("%0.2f\n",ans);
        scanf("%d",&t);
    }
}
