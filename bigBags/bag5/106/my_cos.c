/*
* 摘    要： 自己的cos函数   double my_cos(double x)

  数学原理：
  cos x = 1 - x^2/(2!) + x^4/(4!) - ... +(-1)^n * x^(2*n)/((2*n)!)    
*/

#include "my_math.h"
//#include "my_fabs.c"

double my_cos(double x)
{
	int n = 1;
	double dTemp = 1, dCos = 1;

	while (my_fabs(dTemp) > 1e-20)
	{
		dTemp *= -x*x/((2*n-1) * 2*n);
		dCos += dTemp;
		n++;
	}

	return dCos;
}