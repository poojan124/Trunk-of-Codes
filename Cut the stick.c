#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    int arr[1001],a,b,i,j,countz=0,n,min=20000,newarr[1001]={0},countn=0,c=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(n>0)
    {
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (arr[i] < arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=min)
        {
            min=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==min)
        {
            countz++;
        }
    }
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i]-min;
    }
    newarr[c]=n;
    c++;
    countn++;
    n=n-countz;
    countz=0;
    min=20000;
    }
    for(i=0;i<countn;i++)
    {
        printf("%d\n",newarr[i]);
    }

    return 0;
}
