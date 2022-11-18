/*
* ժ    Ҫ�� �������������rand()������û���ã���������û�취���������ִ��������ã��ܷ��ڴ�
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N 2000
#define E 2.718281829

void main()  
{
	float x[N], y[N], fx[N];
	int i, n = 0;
	unsigned long t;

	t = (unsigned long)time(NULL);
	printf("time t=%d\n\n", t);
	srand( t );
    //randomize();

	//������������� y=exp(-x), x ����[0,1]
	for (i=0; i<N; i++)//���������
	{
		x[i] = (float)rand()/RAND_MAX;
		y[i] = (float)rand()/RAND_MAX;
	}


	for (i=0; i<N; i++)
	{
		fx[i] = (float) exp(-x[i]);

    	if (y[i] < fx[i])
		{
			n++;
			if (!( n%100 ))
			{
				printf("i=%d, X=%f, Y=%f, fx=%f,  n=%d\n", i, x[i], y[i], fx[i], n);
			}
		}

	}	


	printf("\n����ֵ:%f \n��ʵֵ:%f\n", (float)n/N, (1-1/E));
}