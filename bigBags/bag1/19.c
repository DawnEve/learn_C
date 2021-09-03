#include <stdio.h>
void main()       /*把输入 输出到键盘缓冲区  */
{
	char c;
	for(;(c=getchar())!='\n';) 
		putchar(c);

	//putchar('\n');
}