#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define pi 3.14159265358979323846264338327
using namespace std;

double find(pair<double,pair<double,double>> p1,pair<double,pair<double,double>> p2,pair<double,pair<double,double>> p3)
{
    pair<double,pair<double,double>> p1_p2;
    p1_p2.first=p2.first-p1.first;
    p1_p2.second.first=p2.second.first-p1.second.first;
    p1_p2.second.second=p2.second.second-p1.second.second;
    pair<double,pair<double,double>> p2_p3;
    p2_p3.first=p3.first-p2.first;
    p2_p3.second.first=p3.second.first-p2.second.first;
    p2_p3.second.second=p3.second.second-p2.second.second;
    //cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    //cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    //cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;
    /**printf("%lf %lf %lf\n",p1.first,p1.second.first,p1.second.second);
    printf("%lf %lf %lf\n",p2.first,p2.second.first,p2.second.second);
    printf("%lf %lf %lf\n",p3.first,p3.second.first,p3.second.second);**/
    double temp1=sqrt((p1_p2.first*p1_p2.first)+(p1_p2.second.first*p1_p2.second.first)+(p1_p2.second.second*p1_p2.second.second));
    double temp2=sqrt((p2_p3.first*p2_p3.first)+(p2_p3.second.first*p2_p3.second.first)+(p2_p3.second.second*p2_p3.second.second));
    double temp3=(p1_p2.first*p2_p3.first)+(p1_p2.second.first*p2_p3.second.first)+(p1_p2.second.second*p2_p3.second.second);
    //cout<<temp1<<" "<<temp2<<" "<<temp3<<" "<<acos(temp3/(temp1*temp2))<<endl;
    return acos(temp3/(temp1*temp2));
}
int main() {
    int n,i;
    scanf("%d",&n);
    pair<double,pair<double,double>> cordi[n];
    vector<pair<double,pair<double,double>>> v1;
    double ans=0;
    for(i=0;i<n;i++)
    {
        double x,y,z;
        cin>>x>>y>>z;
        cordi[i].first=x;
        cordi[i].second.first=y;
        cordi[i].second.second=z;
        v1.push_back(cordi[i]);
    }
    //cout<<v1[1].first<<v1[1].second.first<<endl;
    for(i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                double temp;
                temp=find(v1[i],v1[j],v1[k]);
                if(temp>3.14159265358979323846264338327/2)
                    temp=3.14159265358979323846264338327-temp;
                //printf("temp = %0.10f\n",temp);
                ans=ans+temp;
            }
        }
    }
    printf("%0.11f",ans/n);
    return 0;
}
