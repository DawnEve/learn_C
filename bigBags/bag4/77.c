/*
* ժ    Ҫ���Լ����ַ����ȽϺ��������ʱ���0�������ʱΪ��ͬλ��ASCII��Ĳ�ֵ�� ����ʵ��strcmp() �� 
*/


#include <stdio.h>
int MyStrcmp(char a[], char b[])
{
	int i = 0, j = 0;
	while ((a[i] == b[i]) && (a[i] != '\0'))
	{
		i++;
	}

	if (a[i] == '\0' && b[i] == '\0')
	{
		return 0;
	}
	else
	{
		return (a[i] - b[i]);
	}
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

	printf("\n�����ַ����ֱ��ǣ�(��Բ�����)\ns1 = %s.\ns2 = %s.\n",s1,s2);

	printf("\nthe result:%d\n",MyStrcmp(s1, s2));//���ú�����������ַ����Ĳ��
//	printf("\n���Ӻ�������ַ�����s1 = %s, s2 = %s\n",s1,s2);
}