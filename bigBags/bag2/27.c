#include <stdio.h>
#include <math.h>
void main()  /* ��ӡͼ��  ������*/
{
	int i,t;
	for(i=1;i<=5;i++)
	{
		for(t=1;t<=20-i;t++) 
			printf(" ");   /* ���20�ɵ����������������ε�ˮƽλ��*/
		for(t=1;t<=2*i-1;t++) 
			printf("*");  /* ˫��ѭ������ѭ�������У���ѭ��������*/
       printf("\n");
	}
}