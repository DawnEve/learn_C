#include<stdio.h>

int volume(int l, int w){
	extern int h; //在此不为h分配空间仅表示使用一个在其它地方定义的变量
	printf("in func: l=%d, w=%d, h=%d\n", l, w, h);
	return(l*w*h);	
}

int main(){
	extern int w,h;
	int l=10; //本地l覆盖全局的l
	printf("in main: l=%d, w=%d, h=%d\n", l, w, h);
	printf( "v=%d\n", volume(l,w) );
}

int l=3, w=4, h=5;
