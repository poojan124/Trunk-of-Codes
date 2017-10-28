#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    double n,k,arr[200],a,sum1=0,sum2=0,sum=0,z,x;
    int j,cz,n2=0,flag,cz1;
    long long int ansz;
    static int n1,i;

    scanf("%lf %lf",&n,&k);
    n1=0;
    for(i=0;i<n;i++)
    {
        scanf("%lf",&arr[i]);
    }
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (arr[i] <arr[j])
            {
                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    n2=1;
    if(n%k==0)
    {
        cz=n/k;
    }
    else
    {
        cz1=(n/k);
        cz=cz1+1;
    }
    i=1;
   while(n2<=cz)
    {

        for(j=0;j<k;j++)
        {
            sum1=sum1+(i*arr[n1]);
            n1++;
        }

        n2++;
        i++;
    }
    ansz=sum1;
    printf("%.0lf",sum1);
    return 0;
}
