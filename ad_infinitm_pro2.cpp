#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#define pi 3.1415926535897932384626433832795028841971
using namespace std;
int main()
{
    double x[1200],y[1200],z[1200];
    long int n,count=0;
    scanf("%ld",&n);
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i]>>z[i];
    double sum=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                double x1,x2,y1,y2,z1,z2;
                x1=x[i]-x[j];
                y1=y[i]-y[j];
                z1=z[i]-z[j];
                x2=x[k]-x[j];
                y2=y[k]-y[j];
                z2=z[k]-z[j];
                //printf("%f %f %f %f\n",x[i],x[j],y[i],y[j]);
                double temp1=(x1*x1)+(y1*y1)+(z1*z1);
                double temp2=(x2*x2)+(y2*y2)+(z2*z2);
                double temp3=(x1*x2)+(y1*y2)+(z1*z2);
                double temp4=(temp3/(sqrt(temp1)*sqrt(temp2)));
                double ans=acos(temp4);
                if((ans*2)>pi)
                    ans=pi-ans;
                sum=sum+ans;
                //printf("%f %f %f %f\n",temp1,temp2,temp3,ans);
                count++;
            }
        }
    }
    printf("%0.11f",sum/count);
}
