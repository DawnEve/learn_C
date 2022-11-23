/*
* 蒙特卡洛法求任意函数的定积分
* 随机数的使用
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define E 2.718281829   //无理数e
#define PRECISION 1e-6   //细分积分区间 精度

// 待求积分的函数
double fun(double x){
	return exp(-x);
}

// 主函数
void main(){
	double m_integral(double a, double b, double (*p)(double x));
	printf("\n积分\n计算机算法计算值:%f \n人工计算的真实值:%f\n", m_integral(0, 1, fun), (1-1/E));
}



/*
new function
* 函数原型：double m_integral(double a, double b, double (*p)(double x));
* 实现功能：蒙特卡洛法求任意函数的定积分
* 输入项 ：共三个（积分下限， 积分上限， 要使用的函数的指针）;
* 返回值 :函数在区间上的定积分;
* 自我评价：负值没考虑进去 //todo
*/

//核心函数
double m_integral(double a, double b, double (*p)(double x))
{
	double ya, yb, ymax, x, y, fx;
	int i, count = 0, max = 10;
	unsigned long t;

	//细分积分区间
	while ((b-a)/max > PRECISION)
		max *= 10;   //用到了精度
	// 测试用 输出函数
	printf("细分份数：max = %d\n\n", max);

	// 时间种子初始化随机数函数
	t = (unsigned long)time(NULL);
	printf("时间种子：%d\n", t);
	srand( t );

	for (i=0; i<max; i++) {
		//经验: 做除法前必须加强制转化分子为(float)！ 否则很很糟糕
		x = (float) rand()/RAND_MAX;
		y = (float) rand()/RAND_MAX;

		fx = ( (float) (*p)(x) );

		//如果点在曲线下，则计数器+1
		if (y < fx) {
			count++;
		}
	}

	ya = (*p)(a);
	yb = (*p)(b);
	ymax = (ya > yb)?ya:yb;
	// 测试用 输出函数
	printf("ymax = %f\n", ymax);

	return (ymax*(b-a) * count/max); //*前面是总面积 height*width，*后面是 落到积分内的点的概率
}
