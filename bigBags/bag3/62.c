#include <stdio.h>
#include<math.h>
float fun(float);
float fun1(float);

void main()  //�����ʼֵ����ţ�ٵ������󷽳̵ĸ�
{
	float x,x0,f,f1;
	printf("please input init value of x: ");
	scanf("%f",&x);
	do{
		x0=x;
		f=fun(x0);
        f1=fun1(x0);
		x=x0-f/f1;
	}while(fabs(x-x0)>=1e-5);

	printf("The root of equation is %5.2f\n",x);
}

float fun(float x)  //f(x)=0�е�f(x)
{
	return(2*x*x*x-4*x*x+3*x-6);
}

float fun1(float x)  ////f(x)=0�е�f(x)�ĵ���
{
	return(6*x*x-8*x+3);
}