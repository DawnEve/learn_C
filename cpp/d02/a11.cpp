/**
8bits = 1byte, 一个字节，就是一个char，2**8=256，最高位不用是 128；
8bits(比特位 / 位) = 1byte(字节);
16进制需要 1 2 4 8 2^4=16，4位二进制01(bits)来表示，也就是半字节。

0x12345678
	* 高位/影响最大的位 most significant bit: 12 相当于万位
	* 低位/影响最小的位 least significant bit: 78 相当于个位

一个char 占用 1 bytes，正好需要2位16进制来表示。对应颜色的 (10)255 = (16)FF;
	* 大小端都要保证一个char是完整的。
一个 int 占用 4 bytes，需要 8 个16进制位来表示。
	* 0x12345678; 把int写成16进制，每2位都是一个bytes，是内存的直接状态: 0x12 0x34 0x56 0x78
	* 读取不需要关注存储细节，肯定要和最初的写入一致，要读出 12345678
	* 大端(低地址 放高位/万位) |0x12|0x34|0x56|0x78|--|  低地址 -----> 高地址
	* 小端(低地址 放低位/个位) |--|0x78|0x56|0x34|0x12|  低地址 -----> 高地址

优劣:
	* 大端模式比较符合人的直观习惯: 大端就像我们手写一串数字，先写百位，再写十位，再写个位，依次放到内存中：地址由小向大增加，而数据从高位往低位放
	* 但小端模式是intel的选择。更符合逻辑: 低地址的不重要(least significant bit)，高地址的重要(most significant bit)。


读取时：
1）大端依次读出，小端倒叙读出。读取时，字节内部是一个整体不受倒叙影响。
2）读取后，就和之前未存储时顺序一致了，也就是数没发生变化。

优劣:
大小端模式各有优势：
小端模式强制转换类型时不需要调整字节内容，直接截取低字节即可；??
大端模式由于符号位为第一个字节，很方便判断正负。


大小端的影响:
1) 网络传输: 字符流(无影响？)、字节流(有影响)
其实，对于大小端的一些应用目前主要在网络编程的网络字节序转换当中？

但是后来互联网流行，TCP/IP协议规定为大端模式，为了跨平台通信，还专门出了网络字节序和主机字节序之间的转换接口（ntohs、htons、ntohl、htonl）

又因为char只占有一个字节，因此字符不需要考虑大小端，而字符串又是单个字符的组合，因此也不需要考虑大小端。因此，在网络通信中，通信信息为字符串，因此不需要考虑大小端问题。


2) 通过编程测试，发现只有强制类型转换运算符在大小端系统中会得到不同的结果；
其它的位运算符如：>> 、<< 、|、；算术运算符等都没有影响；


3) 变量的首地址是不是变量的最低位地址？变量的内存分配从高地址到低地址，那这样是不是可以理解为首地址是高地址？变量的地址到底是由变量的首地址表示还是最低位地址表示？上述问题跟大小端有木有关系？

4) 大小端问题对于8bit对齐的系统没有什么影响，但是对于16bit及以上操作影响甚大，需要慎重考虑，因为你存的可能完全不是你要的东西了。

DSP一般都是4字节的倍数对齐的，这样对寄存器的访问不易出错；大小端模式没什么影响，主要是在不同主机上通信，需要以网络字节序为准。

什么时候需要判断大小端模式? 
一般情况下，只有需要跟硬件直接打交道的地方才需要自己去判断大小端，其余的地方编译器和操作系统会帮你搞定，比如对多字节数据类型进行按位运算。
另外，网络传输数据的时候是按照字节传输的，这时候就需要考虑字节序。



不管大小端，一个变量的地址，总是低地址吧？对。

搞明白了，我确实不需要花时间搞懂这个大小端。只有非8bits机器，或者网络字节流需要考虑

数值计算，只需要知道c++数据类型、函数、传参、引用、指针、特别是高维指针、返回、文件IO这个子集就可以了，需要改写了还要知道class等。
*/

#include<iostream>
// **********************1
void test1(){
	short int x;
	char x0,x1;
	x=0x1122;
	printf("x=%x, &x=%p\n", x, &x);
	
	x0=((char*)&x)[0]; //低地址单元
	x1=((char*)&x)[1]; //高地址单元
	printf("x0=%d,%c\t x1=%d,%c \n", x0,x0, x1,x1); //34 17
	// 低地址存的是低位(22 相当于是个位 Least significant end)，小端
}




// **********************2
// 共用体检测
union myunion{
	int a;
	char b;
};

int isLittleU(){
	union myunion s1;  //共用体测试
	
	s1.a=0x10000000;
	if(s1.b==0x10){
		return 0; //big
	}else if(s1.b==0x00){
		return 1; //little
	}

	return -1;
}

//指针检测
int isLittleP(){
	int a;
	a=0x10000001;   //指针测试
	char b=*((char*)(&a));
	//printf(">> b=%d\n", b);

	if(b==0x10){
		return 0;	//printf("Big\n");
	}else if(b==0x01){
		return 1;	//printf("little\n"); 
	}

	return -1;
}

void test2(){
	//代码对，分析错的博客: https://www.jianshu.com/p/47dc814c9146
	// 分析合理: https://blog.csdn.net/a6333230/article/details/117117919 
	std::cout << std::endl;
	
	std::cout << "is little?   union method: " << isLittleU() << std::endl;
	std::cout << "is little? pointer method: " << isLittleP() << std::endl;
	std::cout << std::endl;
}



// **********************3
// https://blog.csdn.net/wwwlyj123321/article/details/100066463
void test3(){
	//int hexInt=0x01020306;
	int hexInt=0x41426162; //ABab ->10进制 65 66 97 98 ->16进制 41 42 61 62
	//获取int的地址，转为指向char的指针
	char *p2=(char*) &hexInt;     // 指针方式其实就是共用体的本质
	printf("hexInt=%x, &hexInt=%p\n", hexInt, &hexInt);
	printf("length, char*: %d, char: %d, int: %d\n", 
			sizeof(p2), sizeof(*p2), sizeof(int));
	
	for(int i=0; i<4; i++){
		// 逐个打印char，不行 %c，因为ascii有不可打印字符。打印其对应的int可以
		printf("[%d](%p) %d %c\n",i, ( p2 +i), *( p2 +i),  *( p2 +i) );
	}
}

int main(int argc, char *argv[]){
	void printAscii(int colNumber);
	// 直接打印，int to char 失败。有人说不能强制转换，要使用指针。
	test1();
	test2();
	test3();

	//part2: 如果有额外参数，则打印ascii 码
	if(argc>1){
		// 打印参数列表
		printf("\n>>argc:%d\n", argc);
		for(int i=0; i<argc; i++){
			printf("argv[%d]=%s\n", i, argv[i]);
		}
		printAscii(9);
	}
	return 0;
}

//打印 ascii 码: 按 128*2 打印，虽然128后面大多是空的
void printAscii(int colNumber){
	for(int i=0; i<255; i++){
		printf("[%d]%c\t", i, i);
		if(i%colNumber==0){
			printf("\n");
		}
	}
}