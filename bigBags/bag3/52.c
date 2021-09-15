#include <stdio.h>
#include <string.h>

int ishuiwen(char *p0) //判断是否回文字符串
{
	char *q0=p0; 
	while(*q0!='\0') q0++;
	q0--; //p0 ---> q0
	while(p0<q0)
		if(*p0==*q0){
			p0++;
			q0--; //出错于此：q--写成了q++
		} else 
			return 0;
	//这地方逻辑比较妙！如果回环，正常结束循环就返回1；否则返回0
	return 1;
}

void reversePrint(char *q)//逆序打印字符串
{
	char *p;
	int n=strlen(q);
	p=q+n;

	/*p已经指向最后一个位置，然后倒序读出即可*/
	for(p--; p>=q; p--)
		putchar(*p);
	putchar('\0');
}

void main()
{
	char a[50];
	printf("\t输入一个字符串，\n\t输出它的逆序，并判断是不是回文字符串\ninput a string:");
    
	//let me try to use this function!
	gets(a);           
	/*this is the usual useage.
	scanf("%s",a);*/

	printf("\n您输入的是： %s\n它的逆序是： ",a);
	reversePrint(a);

	if(ishuiwen(a))
	   printf("\n是个回文字符串\n");
	else printf("\n不是个回文字符串\n");
}