/*
* ժ    Ҫ���������֣���ѯ���ڵ�Ӣ�ĵ��ʡ������ⲿ����ʵ�֡��� 
*/

#include  <string.h> 
#include  <stdio.h>

//���� �ַ����� �ĺ�������ô������
char weekday[][10] = {"Sunday","Monday","Tuesday", "Wednesday",
	"Thursday","Friday", "Saturday"};

void main()
{ 
	int    n;
	char *MyWeek(int m);// ����һ������������ char *
	
	printf(">> ��ӭʹ�����ڲ�ѯϵͳ���������֣���ѯӢ�ĵ���\n");

	printf("Please enter a number:");
	scanf("%d", &n);


	if (n >= 0 && n <= 6) {
		printf("����%d�ǣ�%s\n", n, MyWeek(n) );
	}
	else
		printf("Not found!\n");
}


char *MyWeek(int m)
{
	return weekday[m];
}
