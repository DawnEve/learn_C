/*
* ժ    Ҫ����������a,b������С˳������������ǽ���������ֵ�����ǽ�������ָ�������ֵ
*/

#include <stdio.h>
void main()
{
	int *p1, *p2, *p, a, b;
	printf("Please input 2 int, sep by ,:");
	scanf("%d,%d", &a, &b);
	p1 = &a;
	p2 = &b;
	
	printf("addr of &a,&b: %p, %p,\n\tp1,p2: %p, %p\n", &a, &b, p1, p2);
	
	if (a<b)//���ǽ���������ֵ�����ǽ�������ָ�������ֵ
	{
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("a = %d, b = %d\n\n", a, b);
	printf("max = %d, min = %d\n\n", *p1, *p2);
	printf("addr of &a,&b: %p, %p,\n\tp1,p2: %p, %p\n", &a, &b, p1, p2);
}
 

