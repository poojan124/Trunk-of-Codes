#include<stdio.h>
#include<iostream>
#include<math.h>
#include<unordered_map>
using namespace std;
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    while(a!=0&&b!=0){
        int count=1,ar[]={145,42,20,4,16,37,58},seq1;
        int temp1=a,flag=0,temp2=b,digit,sum=0;
        unordered_map<int,int> m1,m2;
        m1[temp1]=count;
        m2[temp2]=count;
        while(1){
            if(temp1==89||temp1==1)
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
            cout<<1+m1[temp2]<<endl;
        }
        else{
            count=1;
            while(1){
                sum=0;
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
                if(temp2==89||temp2==1)
                    break;
            }
            //cout<<"temp2 "<<temp2<<" temp1 "<<temp1<<endl;
            if(flag==1){
                cout<<seq1+count<<endl;
            }
            if(flag==0){
                int idx=0;
                if(temp2==1||temp1==1)
                    cout<<"0"<<endl;
                else if(temp2==89){
                    while(idx<7){
                        if((m1.find(ar[idx])!=m1.end())&&(m1.find(ar[idx])!=m1.end()))
                        {
                            cout<<m1[ar[idx]]+m2[ar[idx]]<<endl;
                            break;
                        }
                        idx++;
                    }

                }

            }
        }
        scanf("%d %d",&a,&b);
    }
}
