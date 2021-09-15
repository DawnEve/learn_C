#include <stdio.h>
#include <string.h>
void main()//这个年把主函数放前面了
{
	void re(char *q);   //后面函数的声明。用 函数原型：即定义时的 函数首部+;结尾符号
	int ishw(char *p0); //后面函数的声明
	
	printf("\t输入一个字符串，\n\t输出它的逆序，并判断是不是回文字符串\n");
	char a[50];

	scanf("%s",a);
 /*   void re(char *q);
	int ishw(char a[]);             */
     re(a);  /////错在写成了re(char a)
	if(ishw(a)) printf("\nYes, 是回文字符串。\n");
	else printf("\nNo, 不是回文字符串。\n");
}

void re(char *q)//逆序打印字符串
{
	char *p;
	printf("您输入的是： %s\n", q);
	
	/*求字符串长度  */
	int n;
	n=strlen(q);
	p=q+n;
	
	printf("它的逆序是： "); 
	/*p已经指向最后一个位置，然后倒序读出机壳  */
    for(p--;p>=q;p--)
		putchar(*p);
	putchar('\0');   //用puts() 会换行，只能用这个
}

int ishw(char *p0)//判断是否回文字符串
{
	char *q0=p0;
	while(*q0!='\0')q0++;
	q0--;
	while(p0<q0)
		if(*p0==*q0) {p0++;q0--;}
		else return 0;
	return 1;
}