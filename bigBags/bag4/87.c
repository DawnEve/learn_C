/*
* �ļ���ʶ����ϰ  �Ѿ����������Ϊ��ѧ���⣬���������ѧ��������������
* ժ    Ҫ�� ���������ĳ������һ���飬�ɿ��鱨���£������˭�������ﷸ��   ������ٷ�
  ����A,B,C,D��������������
  ��A B����һ������
  ��C B����һ������
  ��C D����һ������
  ��C A����һ��δ����
*/

#include <stdio.h>
void main()  
{
	int a, b, c, d, t = 0;
	// ����1��δ����0

	for (a = 0; a <= 1; a++)//a
	{
		for (b = 0; b <= 1; b++)//b
		{
			//A B����һ������  ��C��������: �����û�������򲻷���Ҫ��
			if ((a == 1) + (b == 1) == 0)  continue;
			for (c = 0; c <= 1; c++)//c
			{
				if ((c == 1) + (b == 1) == 0)  continue;
				for (d = 0; d <= 1; d++)//d
				{
					if ((c == 1) + (d == 1) == 0)  continue;
					//C A����һ��δ����   ��C��������: ������������򲻷���Ҫ��
					if ((c == 1) + (a == 1) == 2)  continue;

					printf("��%d�ֿ��ܣ�", ++t);

			    	if (1 == a) printf("a  ");
				    if (1 == b) printf("b  ");
				    if (1 == c) printf("c  ");
				    if (1 == d) printf("d  ");
				    printf("\n");
				}
			}
		}
	}
	printf("\n");
}