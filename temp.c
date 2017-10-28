#include <stdio.h>

int main()
{
   long long int a[100000],max=0,sum=0,i,j,n,k,l,m,z,sum1=0,sum2=0;
	scanf("%lld %lld",&n,&k);
	for(l=0;l<k;l++){
		sum=0;
		sum1=0;
		sum2=0;
		for(j=0;j<n;j++){
			scanf("%lld",&a[j]);
		}
        m=0;
        z=0;
	    for(i=0;i<n/2;i++){
	    	sum1=sum1+a[i];

	    }
	    for(i=n/2;i<n;i++){
	    	sum2=sum2+a[i];
	    }
	  // printf("%lld %lld \n",sum1,sum2);
	    if(sum1>sum2){

		for(i=0;i<(n/2);i++){

			if(a[m]>a[n-z-1]){
				sum=sum+a[m];
			//	printf("vikas %lld \n",sum);
				m++;
			}
			else{
			//	printf("poojan");
				sum=sum+a[n-z-1];
				z++;
			}
		}
            if(sum>max){
                max=sum;
            }
		}
		else
		{
			if(sum2>max){
				max=sum2;
			}
		}
//	printf("VIKAs\n");
	}
	printf("%lld",max);

    return 0;
}
