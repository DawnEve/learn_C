/*
* ժ    Ҫ�� �Լ���exp����  double my_exp(double x)

  ��ѧԭ��
  e^x = 1 + x + x^2/(2!) +... + x^n/(n)!    
*/

#include "my_math.h"
//#include "my_fabs.c"

double my_exp(double x)
{
	int n = 1;
	double dTemp = 1, dExp = 1;

	while (my_fabs(dTemp) > 1e-20)/////////////
	{
		dTemp *= x/n;
		dExp += dTemp;
		n++;
	}

	return dExp;
}