#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int no,t,stop,ans1=0,ans=0,ans2=0;
    scanf("%d\n",&stop);
    for(t=0;t<stop;t++){
        scanf("%d\n",&no);
        if(no%2==0)
        {
            ans=pow((no/2),2);
        }
        else{
            ans1=(no+1)/2;
            ans2=(no-1)/2;
            ans=ans1*ans2;
        }
        printf("%d\n",ans);
        ans=0;
        ans1=0;
        ans2=0;
        no=0;
    }
    return 0;
}
