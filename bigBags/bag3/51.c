#include <stdio.h>
#include <string.h>
void main()//�����ӡ�ַ���
{
	char *p,*q="language";
	int n=0;
	printf("%s\n", q);   //why not *q? ��Ϊǰ����%s; 
	printf("%c %c\n", *q, *(q+1));  //������ַ�%c�� ��ʹ��*q
	
	//���ַ�������
	/*����һ: �ҵ���������*/
	for(p=q;*p!='\0';p++)
		n++;
	/*������: �ÿ⺯��*/
	//n=strlen(q);
	
	p=q+n;
	/*p�Ѿ�ָ�����һ��λ�ã�Ȼ�����������*/
	for(p--; p>=q; p--)
		putchar(*p);
	putchar('\0');   //��puts() �ỻ�У�ֻ�������
	//puts("");
}