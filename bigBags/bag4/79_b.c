/*
* ժ    Ҫ���������֣���ѯ���ڵ�Ӣ�ĵ��ʡ�������������ʵ�֡���
*/

#include  <string.h> 
#include  <stdio.h>
void main()
{ 
	int    n;
	char   weekday[][10] = {"Sunday","Monday","Tuesday",
      	                    "Wednesday","Thursday","Friday",
                           "Saturday"};


	printf("\t��ӭʹ�����ڲ�ѯϵͳ���������֣���ѯӢ�ĵ���\n");

	printf("Please enter a number:");
	scanf("%d", &n);


	if (n >= 0 && n <= 6)  
	{
		printf("����%d�ǣ�%s\n", n, weekday[n]);
	}
	else
		printf("Not found!\n");
}