/*
* Copyright (c) 2010, xx�Ƽ��������ι�˾
* All rights reserved.
* 
* �ļ����ƣ�75.c
* �ļ���ʶ����ϰ   �����������룺R droo erhrg Xsrmz mvcg dvvp.����
* ժ    Ҫ�����˹��� A-Z,B-Y,C-X,...a-z,b-y,c-x,... �������롣ͬʱ��Ҳ��һ�����ܳ��򣨶ԳƵģ�
* 
* ��ǰ�汾��1.0
* ��    �ߣ�xx
* ������ڣ�2010-4-28
*
* ȡ���汾���� 
* ԭ����  �� 
* ������ڣ� 
*/

#include <stdio.h>
void main()
{
	int j,n;
	char ch[80],tran[80];
	printf("please input code:");
	gets(ch);//ѧϰ������뺯��
	printf("\n  cipher code:%s",ch);
	j = 0;

	//����������ԭ��
	while (ch[j] != '\0')
	{
		//���ڴ�д��ĸ
		if ((ch[j]>='A') && (ch[j]<='Z'))
		{
			tran[j] = 155 - ch[j];/*����ʽ����������A 65���Z 90��B 66-Y 89,�������ǲ����155������27+64*2
			                         Сдͬ�� a 97.   */
		}
		//����Сд��ĸ
		else if ((ch[j]>='a') && (ch[j]<='z'))
		{
			tran[j] = 219 - ch[j];
		}
		//�����ַ���ԭ��д
		else
		{
			tran[j] = ch[j];
		}

		j++;
	}

	//��ӡ���
	n = j;
	printf("\noriginal text:");
	for (j=0; j<n; j++)
	{
		putchar(tran[j]);
	}

	printf("\n");
}

