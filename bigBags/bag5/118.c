/*
* ժ    Ҫ�� �Ļʺ�����
��ν4�ʺ����������������4��4���������޳�ͻ�İڷ�4���ʺ����ӡ��ڹ��������У��ʺ���ƶ���ʽΪ��������ģ����������һ���ʺ�����λ�õ�ˮƽ����ֱ���Լ�45��б���϶����ܳ��ֻʺ�����ӡ�
https://blog.csdn.net/lxy994/article/details/124714990
*/

#include <stdio.h>

void my_print(int (*p)[4]){
	int i, j;
	for (i=0; i<4; i++)	{
		for (j=0; j<4; j++)	{
			if (*(*(p+i)+j) != 0)   //*(*(p+i)+j)�����õ���������ʽ��������
			{
				printf("%d   ", *(*(p+i)+j));
			}
			else
				printf("_   ");
		}
		printf("\n");
	}
}

void main() {
	int i, j, k = 1, a[4][4] = {0}, col[4] = {-1, -1, -1, -1}, row[4] = {-1, -1, -1, -1},  n = 1, lefttop = 0, righttop = 0;
	//�����ʼֵ
	my_print(a);
	printf("\n");


	//��ֵ���ʺ�Ϊ1
	for (i=0; i<4; i++)
	{
	//	if ((i == row[0]) || (i == row[1]) || (i == row[2]) || (i == row[3])) continue; 
	
		for (j=0; j<4; j++)
		{
	//		if ((j == col[0]) || (j == col[1]) || (j == col[2]) || (j == col[3])) continue; 
			if ((row[i] == -1) && (col[j] == -1)) 
			{

				if ((i == j)  && (lefttop == 1)) continue;
				if ((i == (3-j))  && (righttop == 1)) continue;
				
				a[i][j] = 1;
				k++;

				row[i] = 1;
				col[j] = 1;
				if (i == j) lefttop = 1;
				if (i == (3-j)) righttop = 1;

				
				if (0 == k%4)
				{
					printf("\n��%d�ֽ⣺\n", n++);
					my_print(a);
					printf("\n\n");
				}


			}
		}
	}

	//�������ֵ
	my_print(a);
}
