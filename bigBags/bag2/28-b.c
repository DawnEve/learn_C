#include <stdio.h>
#include <math.h>
void main()  /* 打印图形  平行四边形*/
{
	int i=1,t=0;
	for(;i<=5;i++)
	{	
		for(t=0;t<10-2*i;t+=1) 
			printf(" ");
		printf("********\n");
	}
}