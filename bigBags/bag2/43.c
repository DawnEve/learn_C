#include <stdio.h>
void main()//��̬�������ص�
{
	
	int fan(int );
	int i=0,j;

	for(j=0;j<15;j++)
		printf("\t%d\n",fan(i)); //i=0�����
}

int fan(int a)
{
	static int f=10;
	int b;
	b=f+a; //����a=0������b=f��b���صĺ���ֵ����f��ʵʱֵ��һֱ������
	f++;
	return b;
}