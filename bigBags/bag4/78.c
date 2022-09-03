/*
* 摘    要：自己的字符串拷贝函数（ 函数实现strcpy() ）
* 把第二个字符，拷贝到第一个字符上
*/

#include <stdio.h>
void MyStrcpy(char a[], char b[])
{
	int i = 0;
	while (b[i] != '\0')
	{
		a[i] = b[i];
//		printf("\n连接中的两个字符串：%d s1 = %s, s2 = %s\n", i, a, b);//调试用
		i++;//原来写成了a[i++] = b[i++]; 结果总是不对，因为i自增了2次
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

	printf("\n复制前的两个字符串：s1 = %s, s2 = %s\n",s1,s2);

	MyStrcpy(s1, s2);//调用函数

	printf("\n复制后的两个字符串：s1 = %s, s2 = %s\n",s1,s2);
}