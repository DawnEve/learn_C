/*
* �ݹ鷨��Ҫ�����Ҫ��չ�������ѵݹ�Ĳ��ֻ���һ�������ţ������������������
                          һֱ����û�еݹ����Ϊֹ
* ժ    Ҫ�� ��һ�������������Ϊ�ַ��������ݹ鷨
*/

#include <stdio.h>

void convert(int n) {
	printf(">>start &n:%p, n:%d\n", &n, n);
	int i;
	if ((i = n/10) != 0){
		convert(i);
	}

	//��+ '0'ȥ��֮������
	putchar( n%10 + '0' ); //ԭ��ܼ򵥣����� �ַ�'0'��Ӧ��int ����ƫ�������ٰ��� char ��ӡ
	printf(">>>>end &n:%p, n:%d\n", &n, n);
}


void main(){
	int number;
	printf("int> ");
	scanf("%d", &number);
	
	printf("\noutcome> \n");
	if (number < 0) {
		putchar('-');
		number *=-1;
	}
	convert(number);
	puts("");
}

