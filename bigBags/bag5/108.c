/*
* ժ    Ҫ�� Բ�ڽӶ�������Խ��Խ�ӽ�Բ�Σ�������Բ���ʡ�����ۣ��Ѿ��ù�PI����PI���������double��

    ��ѧԭ��
	�ڽ�n���Σ�һ�߶ԵĽǶ�a = 2*PI/n�� 
	S(������) = 2*r*r*sin a, 
	S(�����) = n * S(������) = n * 2*r*r*sin a 
*/

#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932

//#define N 1e5    //����ϸ�ֵķ������ؼ������޸�-> �Ѿ���Ϊ����

double my_circle_area(double r, int N)
{
	return (N * 0.5*r*r*sin(2*PI/N));
}

void main()  
{
	double r = 1;
	double area1 = PI*r*r;
	printf("  circle:   %2.18f\n", area1);
	
	for(int i=5; i<1e4; i+=1e3){
		double area2 = my_circle_area(r, i);
		printf("N=%d, triangle: %2.18f\n", i, area2);
	}
}

