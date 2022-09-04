/*
* �Զ�����������
* ժ    Ҫ�� 2��3��4λ��Armstrong����һ��nλ���������λ����n�η�֮�͡���
             ��1634=1��4�η� +6��4�η� +3��4�η� +4��4�η���
*/

#define MIN 10        //����������Χ  ����
#define MAX 10000     //����������Χ  ����

#include <stdio.h>
void main()  
{
	int flag, i, n;
	int a, b, c, d, counter = 0;
	long sum=0;

	long power (int, int);

	printf ("\t2��3��4λ��Armstrong����һ��nλ���������λ����n�η�֮�ͣ�\n \
\t��1634=1��4�η� +6��4�η� +3��4�η� +4��4�η���\n\n");

	i = MIN;//the min
	while (i < MAX)	{
		//�����λ����
		a = i / 1000;
		b = (i - 1000 * a) / 100;
		c = (i - 1000 * a - 100 * b) / 10;
		d = i - 1000 * a - 100 * b - c * 10; //	d = i - 10 * (i / 10);
		//printf(">> the number at each place:%d %d %d %d\n", a,b,c,d);
		
		//ȷ���Ǽ�λ����2��3��4
		flag = 4;
		if ((0 == a) && (0 != b)){
			flag = 3;
		} else if ((0 == a) && (0 == b) && (0 != c)){
			flag = 2;
		}

		//���� ���λ����n�η�֮��
		n = flag;
		sum = (power(a, n) + power(b, n) + power(c, n) + power(d, n));
        //��� һ��nλ���������λ����n�η�֮�ͣ������
		if (i == sum){
			printf("%d   ",i);
			counter++;
			
			//��ʮ���ͻ��У����  û��ʮ��.
			if (counter % 10 == 0){
				printf ("\n");
			}
		}
		i++;
	}//end of while
	printf ("\n%d �� %d ����Armstrong�� %d ��\n\n",MIN, MAX, counter);
}


typedef int INTEGER;   //��������������޸�  ����  ���������� 

//���㺯����Ҫ��n����������������x��n����0���������η�
long power(INTEGER x, int n) {
	long result = (long) x;
	while (n > 1){
		result *= (long) x;
		n--;
	}
	return result;
}
