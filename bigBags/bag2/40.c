#include <stdio.h>
int max(int x[], int len)  // 用函数数组调用求5个数的最大值
{
	int i,m=x[0];
	for(i=1;i<len;i++)
		if(m<x[i]) 
			m=x[i];
	return m;
}

void main()
{
	int a[5],i, len=5;
     printf("enter 5 integer:\n");
     for(i=0;i<5;i++)
        scanf("%d",&a[i]);
	 printf("max is: %d\n",max(a, len));
}
