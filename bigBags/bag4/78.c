/*
* ժ    Ҫ���Լ����ַ������������� ����ʵ��strcpy() ��
* �ѵڶ����ַ�����������һ���ַ���
*/

#include <stdio.h>
void MyStrcpy(char a[], char b[])
{
	int i = 0;
	while (b[i] != '\0')
	{
		a[i] = b[i];
//		printf("\n�����е������ַ�����%d s1 = %s, s2 = %s\n", i, a, b);//������
		i++;//ԭ��д����a[i++] = b[i++]; ������ǲ��ԣ���Ϊi������2��
	}
	a[i] = '\0';
}


void main()
{
	char s1[100],s2[100];
	printf("\nInput string1:");
//	scanf("%s",s1);
	gets(s1);

	printf("\nInput string2:");
//	scanf("%s",s2);
	gets(s2);

	printf("\n����ǰ�������ַ�����s1 = %s, s2 = %s\n",s1,s2);

	MyStrcpy(s1, s2);//���ú���

	printf("\n���ƺ�������ַ�����s1 = %s, s2 = %s\n",s1,s2);
}