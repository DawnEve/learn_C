/*
* ժ    Ҫ����������a,b������С˳���������ָ�������Ϊ��������
*/

#include <stdio.h>
void main()
{
	void swap(int *p1, int *p2);// ��������
	
	int a = 0, b = 0;
	int *pointer_1, *pointer_2;

	printf("Please input 2 int, sep by ,:");
	scanf("%d,%d", &a, &b);
	pointer_1 = &a;
	pointer_2 = &b;
	if (a<b)
	{
		swap(pointer_1, pointer_2);
	}
	
	printf("a = %d, b = %d\n\n", a, b);
}
 
void swap(int *p1, int *p2)/*�������pointer_1�����պ�������int�ͣ�
						   ����ʹ*p1����pointer_1ָ��ʼ�������ֽ��е�ֵ*/
{
	int temp;
	temp = *p1;  //�˴���Ҫ��ָ����ָ��ֱֵ�Ӳ���������ָ������Ǿֲ�����������������ȫ��ûɶӰ��
	*p1 = *p2;
	*p2 = temp;
}