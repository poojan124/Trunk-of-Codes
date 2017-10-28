#include<stdio.h>
int main()
{
	int a[5],b,c;
	for(b=0;b<5;b++){
		scanf("%d",&a[b]);
	}
	for(c=0;c<5;c++)
	{
		if(a[c]!=42)
		printf("%d\n",a[c]);
		else
		break;
	}
	return 0;
}
