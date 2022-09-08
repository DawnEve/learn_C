/*
* 摘    要： 自己的fabs函数：  double my_fabs(double x)
*/

#include "my_math.h"

double my_fabs(double x)
{
	if (x <0)
		return -x;
	else
		return x;
}
