/*
* 摘    要： 百钱买百鸡问题  经典问题——穷举法
公鸡 5 钱
母鸡 3 钱
小鸡 1/3 钱
问：100块钱正好买100只鸡，共多少种买法？
*/

#include <stdio.h>
void main() {
	int cocks, hens, chicks;
	printf("公鸡数\t母鸡数\t小鸡数\n");

	for (cocks = 0; cocks < 20; cocks++)
		for (hens = 0; hens < 34; hens++) {
			chicks = 100 - cocks - hens;
			
			//&&前的一句也不能少！否则，就会出现近似后的非法解
			if ((chicks % 3 ==0) && (5*cocks + 3*hens + chicks / 3 == 100))
				printf("%d\t%d\t%d\n", cocks, hens, chicks);
		}
	printf("\n");
}
