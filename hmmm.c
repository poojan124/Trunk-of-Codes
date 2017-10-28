#include<stdio.h>
int main(){
    int i,t,s=0;
    scanf("%d",&t);
    while(t--){
     scanf("%d",&i);
     s+= (i>0)?i:0 ;
    }
    printf("%d\n",s);
    return 0;
}
