//指针数组：每个字符串长度？首字母内存编号？
#include<stdio.h>

int main(){
	int i;
	char *msg[10]={"one","two2","this is an old book!"};
	msg[8]="last one";
	//output value and address
	for(i=0; i<10; i++){
		printf("msg[%d]=%s, \t address=%p\n", i, msg[i], msg[i]);
	}
	
	printf("\n");
	//重新赋值，会不会覆盖掉已有部分？
	char *pOld=msg[1];
	msg[1]="the update number";
	//printf("pOld=%s(%p), new=%s(%p) \n", *pOld, pOld, msg[1], msg[1]);
	//printf("pOld=%s(%p) \n", *pOld, pOld ); //旧地址不让访问，否则报错
	printf("new=%s(%p) \n", msg[1], msg[1] );
	for(i=0; i<10; i++){
		printf("msg[%d]=%s, \t address=%p\n", i, msg[i], msg[i]);
	}
	
	return 0;
}