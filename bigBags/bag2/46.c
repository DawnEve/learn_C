#include <stdio.h>
void main()  //�Ӵ�ָ��
{
	int a,*pa=NULL;
	a=12;
	pa=&a;
	printf("����a=%d,\n����ָ��Ϊ��%p\nʮ����%d\n�˽���%o\nʮ������%x\n",
		*pa,pa, *pa, *pa, *pa);
}