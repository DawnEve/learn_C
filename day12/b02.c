#include<stdio.h>
#include<time.h>
#include <windows.h> //win头文件 提供 Sleep(int ms)，单位是 毫秒
// #include <unistd.h>  //Linux:  unsigned int sleep(unsigned int seconds);参数为秒 （更精确用usleep，微秒）

//探索(自定义随机数种子的)系统时间
// https://blog.csdn.net/mingliyanjin/article/details/117428440
// https://www.jb51.net/article/238039.htm

// time(time_t *) 可以传入一个指针，把返回值放到指针中
//time_t timer; time(&timer);
// 相当于 timer = time(NULL); 或 timer = time(0);

void demo1(){
	//my win7 64bits: int:4, long:4, float:4, double:8, time_t:8
	printf("sizeof>> int:%ld, long:%ld, float:%ld, double:%ld, time_t:%ld\n", 
		sizeof(int), sizeof(long), sizeof(float), sizeof(double), sizeof(time_t));
	
	time_t t1=1, *p1=&t1;
	printf("before: t1=%ld, *p1=%ld\n", t1, *p1);
	//1. time() 接收一个地址：可以是指针
	time(p1);
	printf("after : t1=%ld, *p1=%ld\n", t1, *p1);



	//2. 也可以传入一个变量的地址
	Sleep(1000);//win 下Sleep单位是 ms，也即是1000ms=1s;
	time(&t1);
	printf("after2: t1=%ld, *p1=%ld\n", t1, *p1);



	//3. 如果传入0或NULL，则只能依赖返回值获取时间
	Sleep(1000);
	//time_t t2=time(NULL); //1668904956 单位是s
	time_t t2=time(0);
	printf("after3: t2=%ld\n", t2);
	printf("The hours since 1970-01-01 = %ld\n", t2/3600);
}


// 时间的转化: 获取时分秒、星期等
struct tm_2 {
   int tm_sec;         /* 秒，范围从 0 到 59                */
   int tm_min;         /* 分，范围从 0 到 59                */
   int tm_hour;        /* 小时，范围从 0 到 23              */
   int tm_mday;        /* 一月中的第几天，范围从 1 到 31     */
   int tm_mon;         /* 月份，范围从 0 到 11              */
   int tm_year;        /* 自 1900 起的年数                 */
   int tm_wday;        /* 一周中的第几天，范围从 0 到 6     */
   int tm_yday;        /* 一年中的第几天，范围从 0 到 365   */
   int tm_isdst;       /* 夏令时                           */   
};

void demo2(){
	time_t time1;
	time( &time1 );
	printf("1> time1: %ld\n", time1);
	printf("2> ctime(&time1): %s\n", ctime(&time1) );
	// 获取时分秒
	struct tm *p1;
	p1=gmtime(&time1);
	printf("3> current time: %02d:%02d:%02d\n", 
		8+p1->tm_hour,
		p1->tm_min,
		p1->tm_sec
		);
	// 获取年月日
	printf("4> current date: %d/%02d/%02d\n", 
		1900+p1->tm_year,
		1+p1->tm_mon,
		p1->tm_mday
		);
	// 获取星期
	char *weeks[]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	printf("5> current day: %d, %s\n", p1->tm_wday, weeks[p1->tm_wday]); //[0, 6] 一周的第几天, 0表示周日
}


// 测试系统时间，最细的是多少
void demo3(){
	int j=0;
	for(int i=0; i<5e2; i++){
		//同样的50个数字，没有Sleep，则经过了0-1s；
		// 有Sleep(1)，则经过了 4-7s
		Sleep(1);
		if(i%10==0){
			printf("%d\t%ld\n", j++, time(0));
		}
	}
}

// 尝试截获亚秒时间：时间戳+该时间的序号
void demo4(){
	int j=0;
	time_t old=time(0);
	for(int i=0; i<5e2; i++){
		Sleep(1);
		if( old != time(0) ){
			j=0;
			old=time(0);
		}
		printf("[%3d] %ld-%2d\n", i, time(0), j++);
	}
}



int main(){
	//demo1();
	//demo2();
	//demo3();
	demo4();
}