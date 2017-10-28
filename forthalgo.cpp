#include<iostream>
using namespace std;
int m,n,x,y;
void mul(int *A,int *B,int m,int n,int y)
{
    int C[m][y];
    for(int i=0;i<m;i++)
            for(int j=0;j<y;j++)
                C[i][j]=0;
            for(int i=0;i<m;i++)
            for(int j=0;j<y;j++)
            for(int k=0;k<n;k++)
                C[i][j]=C[i][j]+(A[i*n+k]*B[k*y+j]);
            for(int i=0;i<m;i++)
            for(int j=0;j<y;j++)
                cout<<C[i][j]<<" ";
}

int main()
{

    cout<<"Enter the dimension of first matrix"<<endl;
    cin>>m>>n;
    cout<<"Enter the dimension of second matrix"<<endl;
    cin>>x>>y;

    if(n!=x)
    {
        cout<<"Multiplication can't be done"<<endl;
    }
    else
    {
        int A[m][n],B[x][y];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>A[i][j];
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
                cin>>B[i][j];
        mul(*A,*B,m,n,y);
    }
}
