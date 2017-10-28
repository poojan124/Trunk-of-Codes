#include<stdio.h>
int main()
{
    int i,flag=0;
    char z[100];
    gets(z);
    for(i=0;z[i]!='\0';i++)
        {
            if(z[i]=='n')
            {
                for(i=i+1;z[i]!='\0';i++)
                {
                    if(z[i]=='o')
                    {
                        for(i=i+1;z[i]!='\0';i++)
                        {
                            if(z[i]=='r')
                            {
                                for(i=i+1;z[i]!='\0';i++)
                                {
                                    if(z[i]=='r')
                                    {
                                        for(i=i+1;z[i]!='\0';i++)
                                        {
                                            if(z[i]=='i')
                                            {
                                                for(i=i+1;z[i]!='\0';i++)
                                                {
                                                    if(z[i]=='s')
                                                    flag = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if(flag==1)
           {
                printf("YES\n");
           }
        else
        {
            printf("NO\n"); 	return 0;
        }
        return 0;
}

