#include <stdio.h>
#include <string.h>
void main()//��������������ǰ����
{
	void re(char *q);   //���溯������������ ����ԭ�ͣ�������ʱ�� �����ײ�+;��β����
	int ishw(char *p0); //���溯��������
	
	printf("\t����һ���ַ�����\n\t����������򣬲��ж��ǲ��ǻ����ַ���\n");
	char a[50];

	scanf("%s",a);
 /*   void re(char *q);
	int ishw(char a[]);             */
     re(a);  /////����д����re(char a)
	if(ishw(a)) printf("\nYes, �ǻ����ַ�����\n");
	else printf("\nNo, ���ǻ����ַ�����\n");
}

void re(char *q)//�����ӡ�ַ���
{
	char *p;
	printf("��������ǣ� %s\n", q);
	
	/*���ַ�������  */
	int n;
	n=strlen(q);
	p=q+n;
	
	printf("���������ǣ� "); 
	/*p�Ѿ�ָ�����һ��λ�ã�Ȼ�����������  */
    for(p--;p>=q;p--)
		putchar(*p);
	putchar('\0');   //��puts() �ỻ�У�ֻ�������
}

int ishw(char *p0)//�ж��Ƿ�����ַ���
{
	char *q0=p0;
	while(*q0!='\0')q0++;
	q0--;
	while(p0<q0)
		if(*p0==*q0) {p0++;q0--;}
		else return 0;
	return 1;
}