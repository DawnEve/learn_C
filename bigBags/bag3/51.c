#include <stdio.h>
#include <string.h>

void main()//�����ӡ�ַ���
{
	char *p,*q="language";
	printf("%s\n",q);   //Ϊʲô������*q? �����������%c ��ʹ��*q
	
	/*����һ  �ҵ���������
	for(p=q;*p!='\0';p++);*/

	/*������  ���ַ�������  */
	int n;
	n=strlen(q);
	p=q+n;

	/*p�Ѿ�ָ�����һ��λ�ã�Ȼ�����������  */
	for(p--; p>=q; p--)
		putchar(*p);
	putchar('\0');   //��puts() �ỻ�У�ֻ�������
	puts("");
}