#include <stdio.h>
//#include <string.h>
void main()  /*strcat函数功能的实现  */
{
	char str1[80],str2[80];
	int i=0,j=0;
	puts("输入两个字符串：");
	gets(str1);
	gets(str2);

	/*找到第一个的结束标志 。也可以用strlen()函数实现*/
	while(str1[i]!='\0')
		i++;  

	while( (str1[i++]=str2[j++]) != '\0' );  /*###很绝！！###把第二个元素依次赋给第一个后面*/
	printf("结果为：%s\n",str1);
}

/*######那一行还可以这样来：
while(str2[j]!='\0'){
	str1[i]=str2[j];
	i++;
	j++;
}
str1[i]='\0';  
*/