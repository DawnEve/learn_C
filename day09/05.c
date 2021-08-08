//typedef
#include<stdio.h>

int main(){
	//(1)下面的语句将结构的别名定义为coord;
	typedef struct{
		int x;
		int y;
	} Coord;

	//然后，便可以使用标识符crood来声明这种结构的实例：
	Coord topleft, a; //别名更像类定义
	topleft.x=3;
	topleft.y=10;
	
	//别名还可以把已知类定义为自定义名字
	typedef int my_int;
	my_int a2=20;

	//(2)
	struct coord2{
		int x;
		int y;
	};
	struct coord2 b,bottomright;
	bottomright.x=-20;
	bottomright.y=-100;
	
	printf("output topleft.x=%d, bottomright.x=%d, a=%d\n", 
		topleft.x, bottomright.x, a2);
	
	return 0;
}