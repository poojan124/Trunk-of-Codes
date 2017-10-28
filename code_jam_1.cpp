#include<iostream>
#include<math.h>
#include<stdbool.h>
#include<stdio.h>
using namespace std;
int ch[10]={0};
bool is_cheak()
{
    int i,counter=0;
    for(i=0;i<10;i++)
        if(ch[i]>=1)
            counter++;

    if(counter==10)
        return true;
    else
        return false;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        long int len,n,i,j,ar[15];
        cin>>s;
        len=s.length();
        j=0;
        for(i=15-len;i<=14;i++)
        {
            ar[i]=s[j]-'0';
            ch[s[j]-'0']++;
            j++;
        }
        for(i=15-len;i<=14;i++)
            printf("%ld ",ar[i]);
        int count=0,arr_len=len,res,sum,temp;
        i=2,j=15-arr_len;
        while(count<=200)
        {
            for(int c=0;c<arr_len;c++)
            {
                count++;
                temp=ar[j]*i;
                ar[j]=;
                j++;
            }
        }
    }
    return 0;
}
