#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,count=0;
        scanf("%d %d",&a,&b);
        if(a>=2*b){
            printf("%d\n",b);
            continue;
        }
        else if(b>=2*a){
            printf("%d\n",a);
            continue;
        }
        else{
            while(a>1&&b>1){
                if(a>b){
                    a=a-2;
                    b=b-1;
                    count++;
                }
                else if(b>a){
                    a=a-1;
                    b=b-2;
                    count++;
                }
                else if(a==b){
                    count=count+(2*(a)/3);
                    a=0,b=0;
                    break;
                }
            }
            if(a==1&&b>=2)
                count++;
            if(b==1&&a>=2)
                count++;
            printf("%d\n",count);
        }
    }
    return 0;
}
