/*
* 摘    要：自己的字符串连接函数（ 函数实现strcat() ） 
* 思路: 逐个读取，直到\0，最后再加一个\0
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
//	scanf("%s",s2); //遇到空格就停止了
	gets(s2); //遇到回车才停止

	printf("\n连接前的两个字符串：s1 = %s, s2 = %s\n",s1,s2);

	MyStrcat(s1, s2);//调用函数

	printf("\n连接后的两个字符串：s1 = %s, s2 = %s\n",s1,s2);
}