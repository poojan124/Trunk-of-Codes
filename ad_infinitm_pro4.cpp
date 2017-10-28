#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    double arr[105];
    int i,j;
    arr[0]=0.00000;
    arr[1]=0.00000;
    for(i=2;i<=100;i++)
    {
        double ans=1;
        for(j=0;j<=i-1;j++)
        {
            ans=ans*(365-j)/365;
        }
        arr[i]=1-ans;
        //cout<<"ans : "<<1-ans<<endl;
    }
    for(i=0;i<100;i++)
        printf("%d %0.7f\n",i,arr[i]);
    int t;
    cin>>t;
    while(t--)
    {
        double ch;
        cin>>ch;
        int i=1;
        while(1)
        {
            if(ch>arr[i]&&i<70)
                i++;
            else
                break;
        }
        printf("%d\n",i);
    }
}
