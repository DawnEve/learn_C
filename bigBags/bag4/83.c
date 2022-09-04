/*
* 摘    要：函数实现x的n（正0负整数）次方
*/

#include <stdio.h>
int main() {
	float x;
	double z;
	int    n;
	double power(float x, int n);
//	float js(float x, int n);  //看来只需要引用直接使用的函数即可，间接用到的可以不写

	printf("请输入底数(float)：");
	scanf("%f", &x);

	printf("请输入指数(int)：");
	scanf("%d", &n);

	z = power(x, n);

	printf("\n%5.2f的%d次方是%f\n", x, n, z);
	return 0;
}

/*
* 函数原型：float power(float x, int n);
* 实现功能：返回x的n（正0负整数）次方
* 输入项 ：共2个（底数， 整数指数）;
* 返回值 :x的n（正0负整数）次方
* 自我评价：能分别处理 n为-   0   +三种情况………把0的0次方定义为了0，不妥，但暂时也没法 
*/
double power(float x, int n){
	double _power(float, int);
	double z=x;
	
	if (0 == n)  return 1; //把0的0次方也顺便定义为了0，不妥，但暂时也没法………
	else if (n > 0) return (_power(x, n));
	else if (n < 0) return (1/(_power(x, -n)));
}

//计算函数，要求n是正的整数。返回x的n（正0负整数）次方
double _power(float x, int n){
	double result = x;
	while (n > 1){
		result *= x;
		n--;
	}
	return result;
}