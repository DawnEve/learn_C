/*
* 摘    要： 英语竞赛IQ题: 求出如下十进制算式中 十个字母和十个数字的对应关系
                J U N E
			+	J U L Y
			-----------------
			  A P R I L
// 注意到: 
L用到2次。
最高位不能使0，所以 J!=0, A!=0;

2数字加，最多进1，所以 a=1; J>=5
*/

#include <stdio.h>
void main()  
{
	int j,u,n,e,
		    l,y,
	  a,p,r,i;
	int num = 1;
	a = 1; //a

	for (j=0; j<=9; j++)//j
	{
		if (j == a) continue;
		for (u=0; u<=9; u++)//u
		{
			if (u == a) continue;
			if (u == j) continue;
			for (l=0; l<=9; l++)//l
			{
				if (l == a) continue;
				if (l == j || l == u) continue;
				for (n=0; n<=9; n++)//n
				{
					if (n == a) continue;
					if (n == j || n == u || n == l) continue;
					for (e=0; e<=9; e++)//
					{
						if (e == a) continue;
						if (e == j || e == u || e == l || e == n) continue;
						for (p=0; p<=9; p++)//
						{
							if (p == a) continue;
							if (p == j || p == u || p == l || p == n || p == e) continue;
							for (r=0; r<=9; r++)//
							{
								if (r == a) continue;
								if (r == j || r == u || r == l || r == n || r == e || r == p) continue;
								for (i=0; i<=9; i++)//
								{
									if (i == a) continue;
									if (i == j || i == u || i == l || i == n || i == e || i == p || i == r) continue;
									for (y=0; y<=9; y++)//
									{
										if (y == a) continue;
										if (y == j || y == u || y == l || y == n || y == e || y == p || y == r || y == i) continue;

								    	if ((j*1000+u*100+n*10+e) + (j*1000+u*100+l*10+y) \
											== (a*10000+p*1000+r*100+i*10+l))
										{
											printf("\n下面是第%d种解：",num++);

											printf("\n\t     j=%d u=%d n=%d e=%d \n\t +   j=%d u=%d l=%d y=%d \n\t----------------------------\n\t a=%d p=%d r=%d i=%d l=%d \n",j,u,n,e,j,u,l,y,a,p,r,i,l);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
