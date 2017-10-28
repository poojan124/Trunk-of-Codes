#include<stdio.h>
int main()
{
    int arr[100]={0},i,countz=0;
    for(i=0;i<100;i++)
    {
        scanf("%d\n",&arr[i]);
        if(arr[i]==42)
        {
            break;
        }
        countz++;
    }
    for(i=0;i<countz;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
