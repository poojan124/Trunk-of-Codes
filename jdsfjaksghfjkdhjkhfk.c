#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,ans,temp;
    float ans1,temp1;
    for(i=1;i<100;i++)
    {
        for(j=i;j<100;j++)
        {
            ans=i*i+j*j;
            temp1=sqrt(ans);
            temp=sqrt(ans);
            temp1=ceil(temp1);
            if((temp1-temp)==0)
            {
                printf("%d %d %d %d\n",i,j,temp,i+j+temp);
            }
        }
    }
}
