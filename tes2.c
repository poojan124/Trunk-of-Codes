#include<stdio.h>
#define p printf
#define for(i,n) for(i=0;i<n;i++)
int main()
{
    int i,n=10;
    p("hi\n");
    for(i,10)
        p("%d\n",i);
    return 0;
}
