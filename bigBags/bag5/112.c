/*
* 摘    要： 测试并完善自己的字符串函数库（len, copy）
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "112.h"


void main() {
	char p1[20] = {"0x"}, p2[20] ={ "0123456789abcdef"};
	printf("\nbefore    p1=%s, p2=%s\n", p1, p2);
	//strcpy(p1, p2);
	my_strcopy(p1, p2, 1);
	printf("\nafter     p1=%s, p2=%s\n", p1, p2);
}
