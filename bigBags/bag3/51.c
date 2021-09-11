#include <stdio.h>
#include <string.h>

void main()//逆序打印字符串
{
	char *p,*q="language";
	printf("%s\n",q);   //为什么不能是*q? 如果按照数组%c 则使用*q
	
	/*方法一  找到结束符号
	for(p=q;*p!='\0';p++);*/

	/*方法二  求字符串长度  */
	int n;
	n=strlen(q);
	p=q+n;

	/*p已经指向最后一个位置，然后倒序读出机壳  */
	for(p--; p>=q; p--)
		putchar(*p);
	putchar('\0');   //用puts() 会换行，只能用这个
	puts("");
}