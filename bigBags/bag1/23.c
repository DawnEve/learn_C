#include <stdio.h>
#include <math.h>
void main()    /*近似圆周率  */
{
	double i=1,t=1,a;
	double sum=1,b=1;

	a=1e-7;     /*精度 */
	while(fabs(b)>=a)
	{   i+=2;
		t*=(-1);
	    b=t/i;
		sum+=b;
	}
	printf("圆周率大约为：%f\n",4*sum);
}

