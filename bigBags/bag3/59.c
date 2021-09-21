#include <stdio.h>
void main()  //输入一行字符，分别统计英文字母、空格、数字和其他字符的个数
{
	char c;
	int letter=0, space=0, digit=0, other=0;
	printf("输入一行字符，分别统计英文字母、空格、数字和其他字符的个数:\n");
	
	/*下面这一行能实现无限制输入，而用数组总会有上界的现实a[100]   */
	while( (c=getchar())!='\n' ) //不统计回车键。开始的错误：把\n写成了\0，结果输入不会终止
	{
		if(c>='a' && c<='z' || c>='A' && c<='Z') letter++;
        else if(c==' ') space++;
        else if(c>='0' && c<='9') digit++;
        else other++;
	}
	printf("\n英文字母个数:%d,  空格个数:%d,  数字个数:%d,  其他字符个数:%d\n", letter, space, digit, other);
}