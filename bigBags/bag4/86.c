/*
* ժ    Ҫ�� �������ʽ ����������ĸ����ʮ��������д�������ʽ�ӣ����ҳ���ĸ���������--��ٷ�
     E G A L
	 *     L
	---------
	 L G A E
�ƶϣ�
	��ͷ�� E��L����Ϊ0��������4λ��
	�ĸ������������L ==E �������޽⡣�����ٵĽ������E��Lֻ����1
*/
#define NoEq
//ע�͵�: 72
//��ע��: 100

#include <stdio.h>
static int counter=0;
void main()  
{
	int e,g,a,l,sum;
	int a1,a2;

	for (e = 1; e <= 9; e++)//e
	{
		for (l = 1; l <= 9; l++)//l
		{
			#ifndef NoEq
			//if (e == l)  continue;
			#endif
			
			for (a = 0; a <= 9; a++)//a
			{
				#ifndef NoEq
				if ((e == a) || (l == a))  continue;
				#endif

				for (g = 0; g <= 9; g++)//g
				{
					#ifndef NoEq
					if ((e == g) || (l == g) || (a == g)) continue;
					#endif

					sum = 100*g + 10*a;   //ʮλ���λ����ֵ
					a1 = 1000*e + sum + l;//��һ������
					a2 = 1000*l + sum + e;//�ڶ�����ֵ

				/*	//��ӡ�м�ֵ��
                    printf("\t%d  ", sum);
                    printf("\t%d  ", a1);printf("\t%d\n", a2);
					printf("��ʽ����ǰ%d%d%d%d\n", e, g, a, l); */

					if ((l*a1) == a2)
					{
						counter++;
						printf("�ϸ������[#%d] e=%d, g=%d, a=%d, l=%d\n", counter, e, g, a, l);
					}
				}
			}
		}
	}
	printf("\n");
}

