/*
* 摘    要： 自己的sin函数  double my_sin(double x)

  数学原理：
  sin x = x - x^3/(3!) + x^5/(5!) - ... +(-1)^n * x^(2*n-1)/((2*n-1)!)    
*/
#include "my_math.h"
//#include "my_fabs.c"
double my_sin(double x)
{
	int n = 2;
	double dTemp = x, dSin = x;

	while (my_fabs(dTemp) > 1e-20)
	{
		dTemp *= -x*x/((2*n-1)*(2*n-2));
		dSin += dTemp;
		n++;
	}

	return dSin;
}
