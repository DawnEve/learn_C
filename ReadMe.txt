Basic C

资料: F:\计算机代码学习文件夹\c语言上机编程

1. 怎么在win7运行c代码?
(1)使用 ANSI 编码格式写代码
否则会中文乱码

(2)
under CMD:
>gcc --version
gcc (x86_64-posix-seh, Built by strawberryperl.com project) 7.1.0
Copyright (C) 2017 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

> gcc 1.cpp -o dustbin/1.exe
> cd dustbin 
> 1.exe



2. 知识结构

day01/ 数据类型、运算符和表达式
	库函数printf()和scanf()的使用 
	01.c 基础 printf() 打印 hello world
	02.c 打印浮点数字
	03.c 类型修饰符long和 unsigned的使用
	04.c 表达式中数据类型转换: 自动转换，
	05.c 表达式中数据类型转换:    ，强制转换 (int) x


day02/ 控制结构-条件 if, switch
	01.c if else
	-  else总是与同一语法层次中离它最近的尚未配对的if配对。
	02.c switch 语句
	03.c while() : 统计从键盘输入一行字符的个数。
		getchar() 读取键盘输入的字符
	04.c do-while语句的表达式后面则必须加分号： sum(1,100)
	05.c for() : sum(1, 100)
	06.c continue, break
	07.c 循环的嵌套: 打印 星号
	08.c 循环的嵌套: 打印 九九乘法表
	
day03/ 函数
	01.c 函数声明、后面实现，函数嵌套调用
	02.c 尝试调用其他文件的函数，如 01.c 报错，不能定义两个 main()

day04/ 数组
	01.c 冒泡法排序
	02.c 二维数组的初始化、打印 
	
day05/ 字符与字符串
	01.c 输入一个字符，然后返回字符和其 ascii 码
	02.c getchar()的用法: 输入一个字符串，不超过某个长度。
	03.c 字符输出函数putchar()
	04.c 字符串的初始化: C用字符数组来存放一个字符串
	05.c scanf() 输入，遇到空格会中断
	06.c scanf() 多设置几个变量接收输入
	07.c 输入输出字符串的格式符 %s
	08.c puts()与printf()的区别，printf()常用。
	09.c 函数gets()与scanf()的区别，gets() 常用。
	10.c strcpy(distStr1, sourceStr2); 把后者复制到前者
	11.c 字符串比较函数strcmp
	12.c 字符串长度函数strlen
	13.c 字符串连接函数 strcat(字符数组名1，字符数组名2); 合并到arr1
	
	//二维字符串数组
	14.c 二维字符串数组的赋值
	15.c 字符串排序: 对几个水果，按照ascii码排序

	
day06/ 变量类别与编译预处理
	01.c 全局变量(extern)，局部变量
	02.c 存储类型 (动态变量，静态变量)
	03.c 寄存器变量(动态变量)
	
	// 宏定义
	04.c 不带参数的宏定义:  define M x*x+3*x 
	05.c 替换范围是，从宏的定义到文档结束，或遇到 #undef 语句
	06.c 带参数的宏： #define SQ(y) ((y)*(y)) 形参要加小括号
	
	// 文件包含
	07.c 文件包含 #include "xx.c"
	08.c 条件编译 #if  #else  #endif


day07/ 指针基本用法
	01.c 
	
#



#



#



#




#




#




#




#


