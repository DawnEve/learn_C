/*
* ժ    Ҫ���Լ����ַ������Ӻ����� ����ʵ��strcat() �� 
* ˼·: �����ȡ��ֱ��\0������ټ�һ��\0
*/

#include <stdio.h>
void MyStrcat(char a[], char b[])
{
	int i = 0, j = 0;
	while (a[i] != '\0')
	{
		i++;
	}

	while (b[j] != '\0')
	{
		a[i++] = b[j++];
	}
	a[i] = '\0';
}



void main()
{
	char s1[80],s2[40];
	printf("\nInput string1:");
//	scanf("%s",s1);
	gets(s1);

	printf("\nInput string2:");
//	scanf("%s",s2); //�����ո��ֹͣ��
	gets(s2); //�����س���ֹͣ

	printf("\n����ǰ�������ַ�����s1 = %s, s2 = %s\n",s1,s2);

	MyStrcat(s1, s2);//���ú���

	printf("\n���Ӻ�������ַ�����s1 = %s, s2 = %s\n",s1,s2);
}