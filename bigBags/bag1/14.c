#include <stdio.h>
void main()   /*求阶乘和阶乘的和  */
{
	int k,t,n,sum=0;
	printf("enter a n:");
	scanf("%d",&n);
	t=1;k=1;
	while(k<=n)
	{
		t*=k;
		sum+=t;
		printf("  %d!=%d\n", k, t);
		k++;
	}
	printf("%d!=%d\nsum=%d\n",n,t,sum);
}