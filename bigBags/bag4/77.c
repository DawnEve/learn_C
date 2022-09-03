/*
* 摘    要：自己的字符串比较函数，相等时输出0，不相等时为不同位的ASCII码的差值（ 函数实现strcmp() ） 
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

	printf("\n两个字符串分别是：(以圆点结束)\ns1 = %s.\ns2 = %s.\n",s1,s2);

	printf("\nthe result:%d\n",MyStrcmp(s1, s2));//调用函数输出两个字符串的差别
//	printf("\n连接后的两个字符串：s1 = %s, s2 = %s\n",s1,s2);
}