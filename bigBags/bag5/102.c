/*
* ժ    Ҫ��Ԥ����������������ĺ꣬�������θ��߳�  ������������
*/

#include <stdio.h>
#include <math.h>
#define S(a, b, c) (a +b + c)/2
#define AREA(a, b, c) sqrt(S(a, b, c) * (S(a, b, c)-a) * (S(a, b, c)-b) * (S(a, b, c)-c))//�� Ƕ�� 
void main()  
{
	float a, b, c;

	printf("Input a, b, c: ");
	scanf("%f,%f,%f", &a, &b, &c);

	if (a+b>c && a+c>b && b+c>a)
	{
		printf("area: %8.2f. \n",AREA(a, b, c));
	}
	else
	{
		printf("It is not a tringle!\n");
	}
}