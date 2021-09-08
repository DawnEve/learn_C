#include <stdio.h>
void main()//静态变量的特点
{
	
	int fan(int );
	int i=0,j;

	for(j=0;j<15;j++)
		printf("\t%d\n",fan(i)); //i=0恒成立
}

int fan(int a)
{
	static int f=10;
	int b;
	b=f+a; //由于a=0，所以b=f，b返回的函数值就是f的实时值：一直在增加
	f++;
	return b;
}