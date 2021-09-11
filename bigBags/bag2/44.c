#include <stdio.h>
#include <math.h>
void main() //函数的递归调用,求2的几次方
{
	int i,s;
	int fun(int);
   
	printf("要求2的几次方：(>=1)\n");
    scanf("%d",&i);

	s=fun(i);
	printf("2的%d次方是：%d\n",i,s);

}

int fun(int n)
{
	if(n==1) 
		return 2;           //必须有初始条件，然后才能用
	else 
		return fun(n-1)*2;      //后一项与前一项的关系递归
}
	
	
