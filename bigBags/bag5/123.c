/*
* ������˼·�����ļ�ĩβ
* ժ    Ҫ�� ������ɢ  �о� Ǧ���� ��������Ϊ�Ĺ�ϵ���������ģ��  ���� 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PI 3.141592653589793238

#define N0 10  // ���أ��ɵ������Ϲ̶���
//n0����ײ֮����������ȫ��������

void main() {
	void simulate(int m, int nx);
	int i = 1, m, nx = 1000000 ;//mǦ���ȣ�nx��������

	//�о� mǦ���� ������ ��Ϊ�Ĺ�ϵ
	// ��ȵ� m=9 ��ʱ��͸���Ѿ���0��
	for (m=0; m<28; m++)
	{
		printf("\n\t��%d��ģ�⣺", i++);
		simulate(m, nx);
	}
}


void simulate(int m, int nx) {
	float nr = 0, np = 0, na = 0;
	int i, n;
	double x;

/*	printf("Deepth of reactor wall: ");
	scanf("%d", &m);
    printf("Total of neutrons: ");
	scanf("%d", &nx);
*/

	//�������ʱ������
	srand( (unsigned long)time(NULL) );
	
    for (i=0; i<nx; i++){
		x = 0;
		n = 0;

		do {
			x += cos( (double) 2*PI*rand()/RAND_MAX);
			n++;
			if (n>N0){
				na++; break;
			}else{
				if (x<0) {nr++; break;}
				if (x>m) {np++; break;}
			}
		}while(1);
	}
	/* ��������� printf("\n�º�\n��͸np=%.2f  \n����na=%.2f  \n����nr=%.2f  \n", np, na, nr); */

	printf("(Ǧ����Ϊ%d*dʱ%d�����ӵ�ͳ�ƽ��)\n��͸��np=%.2f%%  \t������na=%.2f%%  \t������nr=%.2f%%\n",
		            m, nx, 100.0*np/nx, 100.0*na/nx,  100.0*nr/nx);
}
			


/*

# ����:
������Ǧ��ǽ����ײ�����ʧ����������������Ƕȣ��ش˷���ǰ��һ�����루��˾���ΪǦԭ��ֱ��d����֮���������ߡ���

n0����ײ֮����������ȫ�������ա���������ʧ֮ǰ�����ӿ��ܷ����ط�Ӧ�ѣ����ܴ�͸Ǧ�档

Ҫ�����Ǧ����Ϊm*dʱ�Ĵ�͸��np%   ������na%  ������nr%



# ˼·��

����Ƕ�JD = 2*PI* rand()/RAND_MAX;

��������ĳ����ײǰ���ڱڵľ���Ϊx�� ����һ����ײǰx�仯Ϊx += d*cos(JD); 

��ײ��ͳ�ƴ�͸��np%,������nr%��ʣ�µ��� ������na% 



# �о������

����Ǧ���ȵ����ӣ���͸�� �½������Ϊ�㣻 �����ʡ����������ӣ�����ȶ���һ����С�ķ�Χ
*/