#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char input[100],output[100];
    int i,j,value[100],z;
    printf("enter text");
    gets(input);
    z=strlen(input);
    for(i=0;i<z+1;i++)
    {
        value[i]=input[i];
    }
    output[z-1]='\0';
    for(i=0;i<z;i++)
    {
        if(value[i]>value[i+1])
        {
            value[i+1]=value[i]+value[i+1];
            value[i]=value[i+1]-value[i];
            value[i+1]=value[i+1]-value[i];
        }
        else
        {
        }
        output[i]=value[i];
    }
    printf("\n\n%s",output);
    return 0;
}
