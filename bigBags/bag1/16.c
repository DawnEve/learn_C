#include <stdio.h>
#include <math.h> 
void main()  /*辗转相除法 求最大公约数和最小公倍数*/
{
	int m,n,a,b,r;
	printf("\t求最大公约数和最小公倍数\n请输入两个数:（用英文的逗号隔开）");
	scanf("%d,%d",&m,&n);   /*%d %d则用空格隔开即可， %d,%d用英文的逗号隔开*/
	a=m;b=n;
	r=b;
	while(r!=0)
	{
		r=a%b;
		/*没有if 则会出现b=0的情况 */
		if(r!=0) {
			a=b;
			b=r;
		} 
	}

	printf("%d和%d的最大公约数是%d\n",m,n,b);
	printf("%d和%d的最小公倍数是%d\n",m,n,m*n/b);  /*即此处会出现除数为零错误*/
}



		  
