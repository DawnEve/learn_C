Basic C


1. 怎么运行c代码？

(1)在win7运行c代码?
1)使用 ANSI 编码格式写代码
否则会中文乱码

2) under CMD:
>gcc --version
gcc (x86_64-posix-seh, Built by strawberryperl.com project) 7.1.0
Copyright (C) 2017 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

> gcc 01.c -o dustbin/01.exe
> cd dustbin 
> 01.exe



(2) 怎么在ubuntu上运行C代码？







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
	01.c 指针，指针的引用
	02.c 指针作为函数参数，传地址，没解引用，不影响main函数
	03.c 指针作为函数参数，传地址，解引用
	04.c 指向一维数组的指针：分别使用下标、指针输出数组
	05.c 数组作函数参数：数组a中的n个整数按相反顺序存放
	06.c 指向数组元素的指针变量作函数参数：求五个学生的C语言平均成绩。
	07.c 指针与字符串：实现字符串拷贝功能
	


day08/ 指针高级用法
	01.c 返回指针值的函数: 返回最大值
	02.c 指向函数的指针: 使用指针调用函数
	03.c 指针数组：每个字符串长度？首字母内存编号？ //todo
	04.c 指针数组作为参数：将多个字符串按字母顺序输出
	05.c 指向二维数组元素的指针变量: 已知二维数组multi[2][3]，输出全部元素
	06.c 指向二维数组中一维数组的指针变量
	07.c 指向指针的指针：简单示例
	08.c 例2: 用二级指针处理字符串
	09.c 命令行参数

day09/ 结构体、共用体和枚举类型
	01.c 结构体：计算学生的平均成绩和不及格的人数。
	02.c 结构体的直接引用、指针引用
	03.c 共用体：将一个整数按字节输出
	04.c 枚举变量的赋值
	05.c typedef

day10/ 数据结构
	01.c 建立静态链表，并输出：元素都是预先定义好的。
	02.c 动态链表
	03.c 动态链表：使用 typedef 使链表引用更简洁
	04.c 动态链表：插入和删除元素

day11/ 文件
	01.c 文件的打开、关闭
	02.c 按字符读写的函数fgetc()、fputc()
		从键盘输入字符，逐个存到磁盘文件中，直到输入‘#“为止
	03.c 按字符串读写的函数fgets()、fputs()
	04.c 按格式要求读写的函数fprintf()、fscanf()
	05.c 按数据块读写的函数fread()、fwrite()
	06.c 对一个磁盘文件进行显示和复制两次操作
		必应搜: while( !feof(fp) )   getc(fp)
	07.c fseek：磁盘文件上有3个学生数据，要求读入第1，3学生数据并显示


day12/ 内存管理与分区
	C语言中，内存主要分为5个区，分别为栈区、堆区、全局/静态存储区、常量存储区、代码区
	其中代码区存放源程序的二进制代码，其余四个区都存储进程运行过程中需要的存储的变量。
    栈区： 向低地址增长
	堆区： 向高地址增长
	
	01.c 内存分为3个分区
		静态区(static)：全局变量存储，在程序的整个生命周期都存在
		栈区(stack)：局部变量存储（自动，连续的内存），主要用于函数调用
		堆区(heap)：动态存储（非常大的内存池，非连续分配），内存的动态申请和归还
	02.c stack 栈区(向下增长): 编译器自动分配释放。存放: 局部数组、局部变量、形参、返回值
		02_b.c 参数入栈的顺序：从右向左
	03.c heap 堆区(向上增长): 程序员分配内存和释放。调用函数: malloc() 和 free();
		* 内存动态分配的相关函数：例如 malloc(size)、calloc(n,size)、free(p)、realloc(p,size)
	04.c static 静态区与常量区。静态区主要保存全局变量和静态变量。
		常量区: "Hello"
	05.c 堆栈一起使用： malloc 申请堆空间，返回地址给指针变量，指针变量本身保存在栈上。
		char *p1=(cahr*)malloc(sizeof(char)*10);
	https://zhuanlan.zhihu.com/p/376310911
	


day13/ windows 编程 -- 跳过
	第15章 Windows程序设计初步
	第十六章 GDI的图形程序设计 P119/180
	第十七章 鼠标、键盘消息 P132/180
	第十八章 Windows 菜单、对话框 P139/180
	第十九章 Windows 通用控件 P153/180
	附录A Visual C++ 6.0开发环境 P167/180
	附录B MSDN联机帮助 P169/180
	附录C C语言中的关键字 P173/180
	附录D C语言运算符优先级表 P174/180
	附录E C语言常用库函数参考 P175/180 
		math.h, string.h,stdio.h, 
# 中兴C语言手册基本看完，还有一个实验手册

#
bigBags/ 复习之前学习的部分
	bag1/
	ReadMe.txt 详情看这里


cpp/ C++ 的代码
	d01/ReadMe.txt
	d02/ReadMe.txt


#





#



#




#




#




#




#
$ git remote -v
origin  https://github.com/DawnEve/learn_C.git (fetch)
origin  https://github.com/DawnEve/learn_C.git (push)
$ git remote rm origin
$ git remote add origin git@github.com:DawnEve/learn_C.git
$ git remote -v
origin  git@github.com:DawnEve/learn_C.git (fetch)
origin  git@github.com:DawnEve/learn_C.git (push)

