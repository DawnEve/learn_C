/*
* Copyright (c) 2010, xx科技有限责任公司
* All rights reserved.
* 
* 文件名称：75.c
* 文件标识：练习   ……测试密码：R droo erhrg Xsrmz mvcg dvvp.……
* 摘    要：按此规律 A-Z,B-Y,C-X,...a-z,b-y,c-x,... 解密密码。同时这也是一个加密程序（对称的）
* 
* 当前版本：1.0
* 作    者：xx
* 完成日期：2010-4-28
*
* 取代版本：无 
* 原作者  ： 
* 完成日期： 
*/

#include <stdio.h>
void main()
{
	int j,n;
	char ch[80],tran[80];
	printf("please input code:");
	gets(ch);//学习这个输入函数
	printf("\n  cipher code:%s",ch);
	j = 0;

	//翻译出密码的原文
	while (ch[j] != '\0')
	{
		//对于大写字母
		if ((ch[j]>='A') && (ch[j]<='Z'))
		{
			tran[j] = 155 - ch[j];/*此算式可以这样想A 65变成Z 90，B 66-Y 89,……和是不变的155。都是27+64*2
			                         小写同理。 a 97.   */
		}
		//对于小写字母
		else if ((ch[j]>='a') && (ch[j]<='z'))
		{
			tran[j] = 219 - ch[j];
		}
		//其它字符照原文写
		else
		{
			tran[j] = ch[j];
		}

		j++;
	}

	//打印结果
	n = j;
	printf("\noriginal text:");
	for (j=0; j<n; j++)
	{
		putchar(tran[j]);
	}

	printf("\n");
}

