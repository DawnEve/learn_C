#include <stdio.h>
#include <math.h>
/*循环嵌套。求三位数，满足
1. 其百位不大于二 ，
2. 个位与百位交换 是原来的两倍多 
分析：
各位只能是 1,2
下限是 100*2=200，个位最低是2
上限是 299*3<300*3=900，也就是个位最多是8
*/
void main()
{
	int a,b,c,m,n,s=0;
	for(a=1;a<=2;a++)
		for(b=0;b<=9;b++)
			for(c=2;c<=8;c++)
			{
				m=a*100+10*b+c;
				n=c*100+10*b+a;
				if(n>2*m && n<3*m){
					s+=1; 
					printf("%d   ",m);
					if(s%10==0) printf("\n");
				}
			}
	//putchar('\n');
}