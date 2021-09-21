#include<stdio.h>
#include<math.h>
//水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身。例如：1^3 + 5^3+ 3^3 = 153。
void main()   //求100到1000水仙花数
{
	int i,a,b,c;
	int t;
	for(i=100;i<1000;i++)
	{
		a=i/100;//百位
		b=(i-100*a)/10; //十位
		c=i-100*a-10*b; //个位
		t=(a*a*a+b*b*b+c*c*c);
		if(i==t)
			printf("%d ",i);
	}
	printf("\n");
}
//153 370 371 407
//或用三重循环来算