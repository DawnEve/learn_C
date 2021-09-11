#include <stdio.h>
int age(int n)   //递归: 第一人10岁，后面的都比他大2岁，第n个人几岁?
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
	printf("\n第一个人的年龄是10\n则第%d个人的年龄是%d\n",a,age(a));
}