#include<stdio.h>
#include<iostream>
#include<cmath>
#include<unordered_map>
using namespace std;
int ar[]={145,42,20,4,16,37,58,89};
int min(int a,int b,int c){
return a<b?(a<c?a:c):(b<c?b:c);
}
bool is_in(int n){
    for(int i=0;i<8;i++)
        if(n==ar[i])
            return true;

    return false;
}
int get_idx(int n){
    for(int i=0;i<8;i++)
        if(n==ar[i])
            return i;

}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    while(a!=0&&b!=0){
        int count=1,seq1;
        int temp1=a,flag=0,temp2=b,digit,sum=0;
        unordered_map<int,int> m1,m2;
        m1[temp1]=count;
        m2[temp2]=count;
        while(1){
            if(is_in(temp1)==true||temp1==1)
                break;
            sum=0;
            while(temp1>0)
            {
                digit=temp1%10;
                sum=sum+(digit*digit);
                temp1=temp1/10;
            }
            temp1=sum;
            m1[temp1]=++count;
            //cout<<temp1<<endl;
        }
        //cout<<"enter here"<<endl;
        int idx=0;
        /**if(temp1==89){
                //cout<<"here???"<<endl;
            while((m1.find(ar[idx])==m1.end()) && idx<7){
                //cout<<"here?"<<endl;
                m1[ar[idx]]=++count;
                idx++;
            }
        }**/
        /**for(unordered_map<int,int>::iterator it = m1.begin(); it!=m1.end() ;it++){
            cout<<it->first<<" "<<it->second<<endl;
        }**/
        if(m1.find(temp2)!=m1.end()){
            cout<<a<<" "<<b<<" "<<1+m1[temp2]<<endl;
        }
        else{
            count=1;
            while(1){
                sum=0;
                if(is_in(temp2)==true||temp2==1)
                    break;
                while(temp2>0)
                {
                    digit=temp2%10;
                    sum=sum+(digit*digit);
                    temp2=temp2/10;
                }
                temp2=sum;
                count++;
                m2[temp2]=count;
                if(m1.find(temp2)!=m1.end()){
                        //cout<<"wwth"<<endl;
                        seq1=m1[temp2];
                        //cout<<"seq1 "<<seq1<<"temp2 "<<temp2<<endl;
                        flag=1;
                        break;
                }
                //cout<<temp2<<endl;

            }
            //cout<<"temp2 "<<temp2<<" temp1 "<<temp1<<" m[temp1] : "<<m1[temp1]<<" m[temp2] : "<<m2[temp2]<<endl;
            if(flag==1){
                cout<<a<<" "<<b<<" "<<seq1+count<<endl;
            }
            if(flag==0){
                int idx=0;
                if(temp2==1||temp1==1)
                    cout<<a<<" "<<b<<" "<<"0"<<endl;
                else{
                    int idx1,idx2;
                    idx1=get_idx(temp1);
                    idx2=get_idx(temp2);
                    cout<<a<<" "<<b<<" "<<m1[temp1]+m2[temp2]+min(abs(idx1-idx2),7-idx1+idx2+1,7-idx2+idx1+1)<<endl;
                }
            }
        }
        scanf("%d %d",&a,&b);
    }
}
