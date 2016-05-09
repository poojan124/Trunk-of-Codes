#include<stdio.h>
#include<iostream>
using namespace std;
int max(int a,int b){
    return a>b?a:b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        int arr[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                scanf("%d",&arr[i][j]);

        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    arr[i][0]=arr[i][0]+max(arr[i-1][0],arr[i-1][1]);
                }
                else if(j==(m-1)){
                    arr[i][m-1]=arr[i][m-1]+max(arr[i-1][m-1],arr[i-1][m-2]);
                }
                else{
                    arr[i][j]=arr[i][j]+max(arr[i-1][j],max(arr[i-1][j-1],arr[i-1][j+1]));
                }
            }
        }
        int temp=arr[n-1][0];
        for(int i=1;i<m;i++){
            if(arr[n-1][i]>temp)
                temp=arr[n-1][i];
        }
        printf("%d\n",temp);
    }
    return 0;
}
