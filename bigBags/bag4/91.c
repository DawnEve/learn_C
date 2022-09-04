/*
* 文件标识：练习…………下面的注释块中有命令行的相关内容……
* 摘    要：演示命令行参数与main函数各形参之间的关系 
*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	int  i;
	printf("The program name is:%s\n", argv[0]);//把文件名打印出来
	if (argc > 1){
		printf("The other arguments are following:\n");
		for (i = 1; i<argc; i++){
    	    printf("%s\n", argv[i]);
		}
	}
	return 0;
}

/*
通过命令行参数，使用户可以根据需要来决定我们的程序干什么、怎么干
更像linux命令、参数

main(int argc, char* argv[])

当你把main函数写成这样时
argc的值为程序执行时参数的数目（包括命令本身）
argv[i]为指向第i个参数的字符指针

  这两个内设形参用于接收命令行参数 
*/