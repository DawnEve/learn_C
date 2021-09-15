#include <stdio.h>
#include <string.h>
void main()//逆序打印字符串
{
	char *p,*q="language";
	int n=0;
	printf("%s\n", q);   //why not *q? 因为前面是%s; 
	printf("%c %c\n", *q, *(q+1));  //如果是字符%c， 则使用*q
	
	//求字符串长度
	/*方法一: 找到结束符号*/
	for(p=q;*p!='\0';p++)
		n++;
	/*方法二: 用库函数*/
	//n=strlen(q);
	
	p=q+n;
	/*p已经指向最后一个位置，然后倒序读出即可*/
	for(p--; p>=q; p--)
		putchar(*p);
	putchar('\0');   //用puts() 会换行，只能用这个
	//puts("");
}