/*
* ���ؿ��巨�����⺯���Ķ�����
* �������ʹ��
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define E 2.718281829   //������e
#define PRECISION 1e-6   //ϸ�ֻ������� ����

// ������ֵĺ���
double fun(double x){
	return exp(-x);
}

// ������
void main(){
	double m_integral(double a, double b, double (*p)(double x));
	printf("\n����\n������㷨����ֵ:%f \n�˹��������ʵֵ:%f\n", m_integral(0, 1, fun), (1-1/E));
}



/*
new function
* ����ԭ�ͣ�double m_integral(double a, double b, double (*p)(double x));
* ʵ�ֹ��ܣ����ؿ��巨�����⺯���Ķ�����
* ������ �����������������ޣ� �������ޣ� Ҫʹ�õĺ�����ָ�룩;
* ����ֵ :�����������ϵĶ�����;
* �������ۣ���ֵû���ǽ�ȥ //todo
*/

//���ĺ���
double m_integral(double a, double b, double (*p)(double x))
{
	double ya, yb, ymax, x, y, fx;
	int i, count = 0, max = 10;
	unsigned long t;

	//ϸ�ֻ�������
	while ((b-a)/max > PRECISION)
		max *= 10;   //�õ��˾���
	// ������ �������
	printf("ϸ�ַ�����max = %d\n\n", max);

	// ʱ�����ӳ�ʼ�����������
	t = (unsigned long)time(NULL);
	printf("ʱ�����ӣ�%d\n", t);
	srand( t );

	for (i=0; i<max; i++) {
		//����: ������ǰ�����ǿ��ת������Ϊ(float)�� ����ܺ����
		x = (float) rand()/RAND_MAX;
		y = (float) rand()/RAND_MAX;

		fx = ( (float) (*p)(x) );

		//������������£��������+1
		if (y < fx) {
			count++;
		}
	}

	ya = (*p)(a);
	yb = (*p)(b);
	ymax = (ya > yb)?ya:yb;
	// ������ �������
	printf("ymax = %f\n", ymax);

	return (ymax*(b-a) * count/max); //*ǰ��������� height*width��*������ �䵽�����ڵĵ�ĸ���
}
