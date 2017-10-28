#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    double a,b,no,z,z2,ans1;
    int i,j,ans,stop;
    scanf("%d",&stop);
    for(i=0;i<stop;i++){
    scanf("%lf %lf",&a,&b);
    no=pow(a,b);
    z=no/10;
    z2=(z-floor(z));
    ans1=z2*10;
    printf("%0.0lf",ans1);

    }
    return 0;
}
