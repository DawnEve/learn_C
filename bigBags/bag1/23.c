#include <stdio.h>
#include <math.h>
void main()    /*����Բ����  */
{
	double i=1,t=1,a;
	double sum=1,b=1;

	a=1e-7;     /*���� */
	while(fabs(b)>=a)
	{   i+=2;
		t*=(-1);
	    b=t/i;
		sum+=b;
	}
	printf("Բ���ʴ�ԼΪ��%f\n",4*sum);
}

