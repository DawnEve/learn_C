/*
* 摘    要： 输出字符串中的整型数据  指针
*/

#include <stdio.h>
#include <string.h>

//是否是数字
int isNumber(char *p){
	return ((*p >= '0') && (*p <= '9'))? 1 : 0;
}

//数字字符转化为整型数字
int StrToNum(char *p, int n){
	int sum = 0, temp;
	while (n > 0){
		temp = *p - '0';
		sum = 10*sum + temp;
		n--;
		p++;
	}

	return sum;
}

// 一个安全的输入函数，指定字符指针，指定长度。
void my_gets(char *str, int len){
	char *p=str;
	int i=0;
	while( (*p = getchar()) !='\0' && i< len-1){
		// 遇到回车，则结束读取
		if(*p == '\n')
			break;
		i++;
		p++;
	}
	*p='\0';
}

//主函数 输入与输出
void main() {
/*	char a[] = "a122321";
	printf("%d",StrToNum(a+1,6));
}*/

	char str[50], *pstr;
	int a[30], *pa, i, j, n;
	i = 0; //在字符串中字符位置
	j = 0; //连续数字字符个数
	n = 0; //整数个数

	pstr = str;
	pa = a;

	//输入含有数字的字符串
	printf("请输入含有数字的字符串，[1, 50)位：\n");
	//gets(str); //不安全，无法读入确定的长度
	my_gets(str, sizeof(str)/sizeof(char));
	
	printf("len: %d, str: %s\n", strlen(str), str);

	while (*(pstr + i) != '\0')	{
		if (1 == isNumber(pstr + i)) {
			j++;
		}else if (j>0) {
			*pa = StrToNum((pstr+i-j), j);
			pa++;
			j = 0;
			n++;
		}
		i++;
	}

	// 数字结束的字符串的情况
	if ((*(pstr + i) == '\0') && (j>0)) {
		*pa = StrToNum((pstr+i-j), j);
		n++;
	}


	// 输出
	printf("\n字符串中共有%d个数字：\n", n);
	for (i=0; i<n; i++)	{
		printf("%d  ", a[i]);
	}
	printf("\n");
}
