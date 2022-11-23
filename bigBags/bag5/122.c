/*
* ժ    Ҫ�� ���ؿ��巨��Բ���� 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_POINTS 1e7    //�����������

void main() {
	int counter, i;
	float x, y;

	//ʱ�����ӳ�ʼ�����������
	srand( (unsigned long)time(NULL) );

	// ����㣬����Բ�ľ���С��1����Բ��
	counter = 0; //ע���ʼ��
	for (i=0; i<=N_POINTS; i++) {
		x = (float) rand()/RAND_MAX;
		y = (float) rand()/RAND_MAX;
		if (x*x + y*y <= 1.0)
			counter++;
	}

	printf("counter=%d\n", counter);

	//�����: �뾶��1��Բ���ڵ����������(2*2=4)
	// ���� ����: ԰�ڵ��� / �ܵ���
	printf("The PI is %f\n", 4.000 * counter/N_POINTS); 
}