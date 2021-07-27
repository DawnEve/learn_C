#include<stdio.h>
//指针与字符串：实现字符串拷贝功能

//把后面的复制到前面
void strcpy2(char *pds, char *pss){
	while(*pds++ = *pss++);
}

int main(){
	char a[10]="Good", b[10], *pa, *pb;
	pa=a;
	pb=b;
	printf("str a=%s, b=%s\n", a, b);
	strcpy2(pb, pa);
	printf("str a=%s, b=%s\n", a, b);
	return 0;
}
