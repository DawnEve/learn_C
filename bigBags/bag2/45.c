#include <stdio.h>
int age(int n)   //�ݹ�: ��һ��10�꣬����Ķ�������2�꣬��n���˼���?
{
	int c;
	if(n==1)
		c=10;
	else 
		c=age(n-1)+2;
	return c;
}

void main()
{ 
	int a;
	scanf("%d",&a);
	printf("\n��һ���˵�������10\n���%d���˵�������%d\n",a,age(a));
}