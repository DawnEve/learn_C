/*
* 文件标识：测试  …………………失败，没发现有什么不同…………………
* 摘    要：3种指针的区别： const char *p, char const *p, char *const p
* ……………失败，没发现有什么不同………
https://blog.csdn.net/m0_37806112/article/details/81252151

*/
#include <stdio.h>

// 把后面的字符串复制的前面。
void MyStrcpy1(char *dStr, const char *rStr){ //
	while (*rStr != '\0'){
		*dStr = *rStr;
         dStr++;
         rStr++;
		 puts(dStr);  //这是打印句子
	}
	*dStr = '\0';
}

void MyStrcpy2(char *dStr, char const *rStr){
	while (*rStr != '\0'){
		*dStr++ = *rStr++;
		puts(dStr);  //这是打印句子
	}
	*dStr = '\0';
}

void main(){
	int i;
	for (i=1; i<=2; i++){
		printf("==> i=%d\n", i);
		char a[20] = "china", *pa;
	    char b[20] = "henan", *pb;
    	pa = a;
	    pb = b;
	    printf("original: %s  %s\n", pa, pb);
	    
		if (i==1){ /* 此行可以改为 1 或 2 */
			MyStrcpy1(pa, pb);
			printf("MyStrcpy1(pa, pb) %d    %s  %s\n",i, pa, pb);
		}else{
			MyStrcpy2(pa, pb);
            printf("MyStrcpy2(pa, pb) %d    %s  %s\n",i, pa, pb);
		}
	}
}