#include <stdio.h>
void main()   /*用数组求 Fibonacci数列前20项*/
{
	printf("Fibonacci数列前20项");
	int i;
	int f[20]={1,1};
	for(i=2;i<20;i++)
		f[i]=f[i-1]+f[i-2];
	
	for(i=0;i<20;i++)
	{
		if(i%10==0) printf("\n");
		printf("%6d",f[i]);
	}

	printf("\n");
}