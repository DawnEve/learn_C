#include <stdio.h>
void main()   /*函数的调用。求三个数的最大值 */
{
	int a,b,c;
	int max(int x,int y); //函数声明
	
	printf("请输入三个整数，用来求最大值：空格隔开\n");

	scanf("%d %d %d",&a,&b,&c);
	printf("%d %d %d 的最大值为%d\n",a,b,c,max(max(a,b),c));
}

/*max 函数*/
int max(int x,int y)
{
	int t;
	t=x>y?x:y;
	return(t);
}

