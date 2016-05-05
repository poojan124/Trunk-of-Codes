#include<stdio.h>
#include<iostream>
using namespace std;
int ar[1000000]={0},fr[1000000]={0};
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int id,m,temp;
        scanf("%d",&id);
        fr[id]=1;
        ar[id]=0;
        scanf("%d",&m);
        for(int j=0;j<m;j++){
            scanf("%d",&temp);
            if(fr[temp]==0){
                ar[temp]=1;
            }
        }
    }
    int count;
    for(int i=0;i<1000000;i++)
        if(ar[i]==1)
            count++;

    printf("%d",count);
    return 0;
}
