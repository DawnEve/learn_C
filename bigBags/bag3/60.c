#include <stdio.h>
void main()  //求和s=a+aa+aaa+...+aaa(n个)aaa请输入a,n
{
	int a, n, sum=0, k=1, repA=0;         //这个k起始值问题开始定为了0，一直结果不对
	printf("求和s=a+aa+aaa+...+aaa(n个)aaa\n请输入a,n:");
	scanf("%d,%d",&a,&n);
	while(k<=n)   /*这个循环很好很巧   */
	{
		repA+=a;   //赋值后的repA为k个a组成的数的值
		sum+=repA; //赋值后的sum为多项式的前k项和
		repA*=10;
		k++;
	}

	printf("\na+aa+aaa+...+aaa(n个)aaa=%d\n", sum);
}