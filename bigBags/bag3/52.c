#include <stdio.h>
#include <string.h>

int ishuiwen(char *p0) //�ж��Ƿ�����ַ���
{
	char *q0=p0; 
	while(*q0!='\0') q0++;
	q0--; //p0 ---> q0
	while(p0<q0)
		if(*p0==*q0){
			p0++;
			q0--; //�����ڴˣ�q--д����q++
		} else 
			return 0;
	//��ط��߼��Ƚ������ػ�����������ѭ���ͷ���1�����򷵻�0
	return 1;
}

void reversePrint(char *q)//�����ӡ�ַ���
{
	char *p;
	int n=strlen(q);
	p=q+n;

	/*p�Ѿ�ָ�����һ��λ�ã�Ȼ�����������*/
	for(p--; p>=q; p--)
		putchar(*p);
	putchar('\0');
}

void main()
{
	char a[50];
	printf("\t����һ���ַ�����\n\t����������򣬲��ж��ǲ��ǻ����ַ���\ninput a string:");
    
	//let me try to use this function!
	gets(a);           
	/*this is the usual useage.
	scanf("%s",a);*/

	printf("\n��������ǣ� %s\n���������ǣ� ",a);
	reversePrint(a);

	if(ishuiwen(a))
	   printf("\n�Ǹ������ַ���\n");
	else printf("\n���Ǹ������ַ���\n");
}