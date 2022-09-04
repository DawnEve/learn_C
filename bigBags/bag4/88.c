/*
* 文件标识：练习  …课程表？……如果不可能全满意呢？可能还要找满意度？怎么定义和使用满意度？…以后研究………
* 摘    要： 安排轮休。某公司7名保安，一人一周休一天。
          自己先选休息时间，然后公司统一安排轮休，怎么安排才能让每个人满意？——穷举法
  A：星期2  4；
  B：星期1  6；
  C：星期3  7；
  D：星期5；
  E：星期1  4  6；
  F：星期2  5；
  G：星期3  6  7；
* 完成日期： 
*/

#include <stdio.h>
void main()  
{
	int a, b, c, d, e, f, g;
	d = 5; //只有一个值的先定下来
	printf("\t某公司7名保安轮休表（一人一周休一天，一天一个人休。7表示星期天）\n");
	for (a = 2; a <= 4; a++)//a
	{
		if (a == 3) continue;
		for (b = 1; b <= 6; b++)//b
		{
			if ((b != 1) && (b != 6)) continue;
			if (a == b) continue;
			for (c = 3; c <= 7; c++)//c
			{
				if ((c != 3) && (c != 7)) continue;
				if ((a == c) || (b == c))  continue;
		    	for (e = 1; e <= 6; e++)//e
				{
					if ((e != 1) && (e != 4) && (e != 6)) continue;
					if ((a == e) || (b == e) || (c == e))  continue;
					for (f = 2; f <= 2; f++)//f  不允许是5，因为5已经被d占用了
					{
						if ((f != 2) && (f != 5)) continue;
						if ((a == f) || (b == f) || (c == f) || (e == f))  continue;
						for (g = 3; g <= 7; g++)//g
						{
							if ((g != 3) && (g != 6) && (g != 7)) continue;
							if ((a == g) || (b == g) || (c == g) || (e == g) || (f == g))  continue;
							printf("A=%d  B=%d  C=%d  D=%d  E=%d  F=%d  G=%d  \n",
								a, b, c, d, e, f, g);
						}
					}
				}
			}
		}
	}
}
