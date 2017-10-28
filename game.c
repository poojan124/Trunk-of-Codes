#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
        int userno,sum=1;
        int i,cpuno;
        printf("My no is 1\n");
        for(i=0;i<=10;i++)
        {
            printf("Enter a no  ");
            scanf("\t%d",&userno);
            sum=sum+userno;
            printf("\tsum=%d\n",sum);
            cpuno=11-userno;
            printf("\tMy no=%d\n",cpuno);
            sum=sum+cpuno;
            printf("\tsum=%d\n",sum);
            if(sum==100)
            {
                printf("I win . You Loos.!@looser");
                break;
            }
        }
        return 0;
}
