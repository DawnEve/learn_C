/*
* ժ    Ҫ��Ԥ����������������ĺ꣬��������ֵ����
����ʵ�����滻��
*/

#include <stdio.h>

#define SWAP(a,b) t=a; a=b; b=t    //�������ĺ꣬��������ֵ����

void main() {
	int a, b, t;

	printf("Input two intergers a,b:");
	scanf("%d,%d", &a, &b);
	printf("the two intergers you intput is:a=%d, b=%d\n", a,b);

	SWAP(a, b);       //�������ĺ꣬��������ֵ����

	printf("       the two intergers now is:a=%d, b=%d\n", a,b);
}