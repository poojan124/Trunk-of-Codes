#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,t,stop,k,arr[10000],countno,i;
    scanf("%d",&stop);
    for(t=0;t<stop;t++){
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=0)
        {
            countno++;
        }
    }
    if(countno>=k)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    }

    return 0;
}
