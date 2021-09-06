#include <stdio.h>
#include <string.h>/*用字符串函数时要加这个头文件！！！  */
void main()  /*常用字符串函数-比较，交换，连接，变大或小写，求长度  */
{   
	char a[50]="The World is Big!", b[18];

	puts(a);   /*作用是 输出字符串并换行*/
	printf("%s\n",a);/*作用相同  */
	printf("\n");

	strcpy(b,a);/*strcpy(字符数组1，字符数组2/字符串)作用是 复制字符串/字符数组 到字符串1.连同结束符号/0*/
	puts(b);   /*作用是 输出字符串并换行*/
	printf("\n");

	strcat(a,"I want to travel and view.");  /*连接第二个数组 到第一个字符数组\0前的字符中  */
    puts(a);
	printf("\n");

	if(strcmp(a,b)>0)
		printf("a大于b\n");

	printf("strcmp(a,b) : %d\n",strcmp(a,b));  /*原来返回值是1  */

	printf("字符串b的长度为%d\n",strlen(b));  /*求字符串长度的函数  */

	puts(strlwr(b));  /*字符串变小写字母  */
	puts(strupr(b));  /*字符串变大写字母  */
}