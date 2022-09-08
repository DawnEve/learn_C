/*
* 函数原型：double my_integral(double a, double b, double (*fun)(double));
* 实现功能：返回函数f(x)在[a, b]上的定积分
* 输入项 ：共1个（ 实数x ）;
* 返回值 : exp
*/
#include "my_math.h"

double my_integral(double a, double b, double (*fun)(double))
{
	int i;
	double N = 1 /*[a, b]分成N份*/, 
		dPart = (b - a)/N  /*每份(b-a)/N*/,
		dSum = 0   /*dSum是总面积*/,
		x   /*x是函数自变量值*/;
	
	//设定细分程度,原来是固定的N，不灵活，这样好多了！！
	while (my_fabs(dPart) > 1e-5)   /*  这是精确性的关键。加了绝对值，对反序的数字也能计算了  */
	{
		N *= 10; 
		dPart = (b - a)/N;       /*每份(b-a)/N*/
	}

	x = a - dPart;              /*x是函数自变量值，在这里赋初值*/

	for (i=0; i<=N; i++)
	{
		x += dPart;                    /*x是函数自变量值，不停地递增*/
		dSum += dPart * (*fun)(x);     /*dSum是总面积，不停地递增*/
	}

	return dSum;    /*dSum是总面积，积分的近似值。while (dPart > 1e-5)中的 精确度越大，这个值也是越精确*/
}
