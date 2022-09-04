/*
* 文件标识：练习  把具体问题抽象为数学问题，或可以用数学问题描述的问题
* 摘    要： 案情分析：某处发生一起案情，可靠情报如下，请分析谁可能是罪犯？   ——穷举法
  ·有A,B,C,D四人有作案可能
  ·A B至少一人作案
  ·C B至少一人作案
  ·C D至少一人作案
  ·C A至少一人未作案
*/

#include <stdio.h>
void main()  
{
	int a, b, c, d, t = 0;
	// 作案1，未作案0

	for (a = 0; a <= 1; a++)//a
	{
		for (b = 0; b <= 1; b++)//b
		{
			//A B至少一人作案  的C语言描述: 如果都没作案，则不符合要求
			if ((a == 1) + (b == 1) == 0)  continue;
			for (c = 0; c <= 1; c++)//c
			{
				if ((c == 1) + (b == 1) == 0)  continue;
				for (d = 0; d <= 1; d++)//d
				{
					if ((c == 1) + (d == 1) == 0)  continue;
					//C A至少一人未作案   的C语言描述: 如果都作案，则不符合要求
					if ((c == 1) + (a == 1) == 2)  continue;

					printf("第%d种可能：", ++t);

			    	if (1 == a) printf("a  ");
				    if (1 == b) printf("b  ");
				    if (1 == c) printf("c  ");
				    if (1 == d) printf("d  ");
				    printf("\n");
				}
			}
		}
	}
	printf("\n");
}