/*
* ժ    Ҫ�� ָ������(Ԫ�ؾ�Ϊָ���������ݵ�����)��ʹ��
*/

#include <stdio.h>
int main() {
    int i=0;
	printf("%p: i=%d\n", &i, i);
	//0. ���� ָ������
	/*���������⣬
	p[5] ��ʾһ��5Ԫ������
	��ߵ�*��ʾԪ����ָ��
	��ߵ�char��ʾָ��ָ�����char */
    char *ptr[] = {"Pascal","Basic","Fortran", "Java","Visual C"};
	
	
	//1. �������
	puts("\nPart I: output arr, in static mem");
    for (i=0; i<5; i++) {
        printf("%p: ptr[%d]=%s, addr of this ptr:%p\n", ptr[i], i, ptr[i], &ptr[i]);
    }
	
	
	//2. �����鵱��Ԫ�ص�ָ�룬+1���ƶ��ľ��뿴����������β��
	puts("\nPart II: use the pointer array as element");
	//����붨��ָ�������ָ�룬�������ָ�룬��Ҫ������
	//char (*pArr)[5] ��ʾһ��ָ�룬ָ�� char [5] �������
	//�����У�Ԫ�ز���char������ָ��char��ָ�룬������
	char *(*pArr)[5]=&ptr;
	printf(" ptr:%p,  ptr+1:%p\n", ptr, ptr+1);
	printf("pArr:%p, pArr+1:%p\n", pArr, pArr+1);
	
	
	//3. ������ �Զ��� ָ�룬ָ��������һ����Ԫ�أ����һ����Ԫ����ָ��
	puts("\nPart III: auto arr name to pointer, to its element");
	char **pChar=ptr;
	printf("  ptr:%p,   ptr+1:%p\n", ptr, ptr+1);
	printf("pChar:%p, pChar+1:%p: %s %s\n", pChar, pChar+1, *(pChar+1), pChar[1] );
	
	return 0;
} 

/*

Ԫ�ؾ�Ϊָ���������ݵ����飬��Ϊָ�����顣������������飩
������ʽΪ�� 
  ���͹ؼ���  *������[���鳤��];
����
  char *pStr[5];
*/
