#include<stdio.h>


// 群里看到的一个神奇的、乱七八糟的指针代码，不很理解。
void print(int *arr, int len){
	for(int i=0; i<len; i++){
		printf("arr[%d]=%d\t", i, arr[i]);
	}
	printf("\n");
}

int main(){
	int a=0x01020306, b=(int)&a; //取a的地址，强转为int，保存在b中
		
	printf("a:%d, &a:%p, a:%p, \n", a, &a, a);
	printf("b:%d, &b:%p, b:%p, \n", b, &b, b);
	
	// 把b强转为 int*(指向的是a)，然后取地址，以16进制显示，就是a的值
	printf("%x %d\n", *(int *)b, *(int *)b);
	
	// 初始化数组：第一个0，其余为0
	int c[4] = {50};
	print(c, 4);
	b=(int)c; //把地址c强转为int，存在b中。
	
	for(int i=0; i<4; i++){
		// 左侧是 数组指针 强转为 int，加 int * i ，然后结果强转为 int*，再解引用，做左值
		// 右侧是 取a的地址，强转为char*，然后+i是移动多少位？移动一个char。 再接引用取值
		printf("\t&a:%p, %d; (char*)&a:%p, %d\n", &a, &a,   (char*)&a, (char*)&a);
		printf("\t&a:%p, %d; ((char*)&a+1):%p, %d\n", &a, &a,   ((char*)&a+i), ((char*)&a+i));
		printf("\t&a:%p, %d; *((char*)&a+1):%p, %d\n", &a, &a,   *((char*)&a+i), *((char*)&a+i));
		
		*(int*)(b+4*i) = *( (char*)&a +i);
		printf("c[%d]=%d\n", i, c[i]);
	}
	
	// 测试这是一个什么地址，为什么是4,3,2,1: 就是a的初始值，为什么是倒序的呢？高位放高段了？
	//char *pc=(char*)0x0022FE48;
	char *pc= (char*)&a;
	for(int i=0; i<10; i++){
		printf("[%d] %p: %d\n", i, *(pc+i), *(pc+i) );
	}
	
	return 0;
}