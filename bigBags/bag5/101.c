/*
* ժ    Ҫ��Ԥ����������������ĺ꣬�������������������� 
*/

#include <stdio.h>
#define YUSHU(a,b) a%b  //�������ĺ꣬��������������������

void main() {
	int a, b;

	printf("Input two intergers a,b:");
	scanf("%d,%d", &a, &b);
	
	printf("%d����%d�������� %d\n", a, b, YUSHU(a, b)); //�������ĺ꣬��������������������
}