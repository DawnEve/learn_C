#include <stdio.h>
#include <math.h>
int main()
{
	int s;
	float n,t,pi;
	t=1;pi=0;n=1.0;s=1;
	//级数法计算圆周率 pi=1-1/3+1/5-1/7+...
	while(fabs(t)>1e-6)
	{
		pi+=t;
		n+=2;
		s=-s;
		t=s/n;
	}
	pi=pi*4;
	printf("pi=%10.6f \nn=%d\n",pi,(int)(n+1)/2);
	
	return 0;
}