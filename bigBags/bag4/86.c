/*
* 摘    要： 奇妙的算式 ：有人用字母代替十进制数字写出下面的式子，请找出字母代表的数字--穷举法
     E G A L
	 *     L
	---------
	 L G A E
推断：
	开头的 E与L不能为0，否则不是4位数
	四个数字能相等吗？L ==E ，否则无解。最后穷举的结果看，E和L只能是1
*/
#define NoEq
//注释掉: 72
//不注释: 100

#include <stdio.h>
static int counter=0;
void main()  
{
	int e,g,a,l,sum;
	int a1,a2;

	for (e = 1; e <= 9; e++)//e
	{
		for (l = 1; l <= 9; l++)//l
		{
			#ifndef NoEq
			//if (e == l)  continue;
			#endif
			
			for (a = 0; a <= 9; a++)//a
			{
				#ifndef NoEq
				if ((e == a) || (l == a))  continue;
				#endif

				for (g = 0; g <= 9; g++)//g
				{
					#ifndef NoEq
					if ((e == g) || (l == g) || (a == g)) continue;
					#endif

					sum = 100*g + 10*a;   //十位与百位的数值
					a1 = 1000*e + sum + l;//第一个数字
					a2 = 1000*l + sum + e;//第二个数值

				/*	//打印中间值：
                    printf("\t%d  ", sum);
                    printf("\t%d  ", a1);printf("\t%d\n", a2);
					printf("等式检验前%d%d%d%d\n", e, g, a, l); */

					if ((l*a1) == a2)
					{
						counter++;
						printf("合格的数字[#%d] e=%d, g=%d, a=%d, l=%d\n", counter, e, g, a, l);
					}
				}
			}
		}
	}
	printf("\n");
}

