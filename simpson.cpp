#include<bits/stdc++.h>
using namespace std;
double fun(double var)
{

}
int main()
{
    double x=0,a,b,h;
    scanf("%lf %lf %lf",&a,&b,&h);
    //printf("%lf %lf %lf\n",a,b,h);
    int n;
    n=(b-a)/h;
    double y=(1)/(1+x),arr[n+1],ans1=0,ans2=0;
    for(int i=0;i<=n;i++)
    {
            arr[i]=(1)/(1+x);
            x=x+h;
            if(i%2==1&&i!=n&&i!=0)
                ans1=ans1+arr[i];
            if(i%2==0&&i!=0&&i!=n)
                ans2=ans2+arr[i];

    }
    //printf("%lf %lf %lf\n",ans1,ans2,arr[0]);
    double ans=(h/3.0)*(arr[0]+arr[n]+(4*ans1) +(2*ans2));
    //for(i=)
    printf("%lf\n",ans);
    return 0;
}
