Learn C/C++ the hard way

- 25 item per bag;
- bag1-bag6 代码 review: void main 都改为 int main
	* 复习大学时的代码，谭浩强的书，忘了第几版。

bigBags/
	bag1/
		1.c switch 的使用: 只有 ansi 编码的才能正常输出汉字
		2.c while循环：级数法计算圆周率 pi=1-1/3+1/5-1/7+...
		3.c 定义变量
		4.c 求和 1+2+...+100
		5.c 输入变量: 解一元二次方程组
		6.c fabs 和 abs 有啥区别？没看到区别
		7.c 极限：sin(x)/x 在x->0时，值趋近于1
		8.c 三目运算符: 输入三个数，排序后从大到小输出
		9.c if 的嵌套：else和最近的if连起来用
		10.c 判断是不是闰年
		11.c goto 行号：尽量不要用这个语法
		12.c 循环  while(表达式) {语句}
		13.c 循环 do{语句}while(表达式) 至少执行一次循环体
		14.c for: 求阶乘和阶乘的和
		15.c while: 求100内奇数和与偶数和。 Good
		16.c while: 辗转相除法 求最大公约数和最小公倍数
		17.c for
		18.c for 嵌套: 求满足2个条件的三位数
		19.c for 省略形式: 把输入 输出到键盘缓冲区
		20.c 双重for循环打印下三角的99表
		21.c 双重while()循环打印下三角的99表
		22.c for: 是素数？
		23.c while: 近似圆周率
		24.c for: fibonacci数列的前40项
		25.c for: fibonacci数列的前40项-另解 节省一个变量
	bag2/
		26.c for: 100-200的素数
		27.c for 嵌套：打印图形  三角形
		28.c sizeof: 查看数据类型占位数
		28-b.c 打印图形  平行四边形
		29.c for, 数组：用数组求 Fibonacci数列前20项
		30.c 冒泡法给数组排序
		31.c for 嵌套: 矩阵的转置  将一个二维数组行与列互换，得到新的二维矩阵
		32.c 字符串: 字符数组
		33.c 常用字符串函数-比较，交换，连接，变大或小写，求长度
		34.c strcat函数功能的实现: 通过while寻找'\0'，把第二个放到后面
		35.c 交换法排序: 输入五个学生的姓名和成绩，然后输出按顺序排好的姓名和相应的成绩
		36.c 函数的调用: 求三个数的最大值
		37.c i++与 ++j区别: i++是先返回i，再自增；++i是先自增，再返回i；
		38.c 切线法 求方程的根：//todo 反复看，看懂
		39.c 函数复用：求m个元素中n个的组合数
		40.c 函数 传递数组参数：求5个数的最大值
		41.c 函数 传递多维数组参数：
			多维数组的形参，可以省略第一维，但不能省掉第二维
		42.c 全局变量，只需定义一次，以后只用就行了，不用再定义
		43.c 静态变量的特点
		44.c 函数的递归调用,求2的几次方
		45.c 递归: 第一人10岁，后面的都比他大2岁，第n个人几岁?
		46.c 指针: 概念
		47.c 指针 *(p+i)与a[i]作用相同：用指针求数组最大值
		48.c 指针：用指针移动使一维数组倒置
		49.c 指针：函数数组传递a[]。指针移动使一维数组倒置
		50.c 指针: 求一个班分数的平均分和超过平均分的人数
	bag3/
		51.c 字符指针: 逆序打印字符串
		52.c 字符指针: 判断是否回文字符串
		52-v2.c 同上，main 函数写最顶上了
		53.c 结构体的定义与初始化: 3种方法 + 单个初始化和数组初始化
		54.c 结构体的引用 三种方式
			* 结构体变量名.成员名
			* (*P).成员名
			* p->成员名
		55.c 求100到1000水仙花数
		56.c 由利润用分段函数，计算奖金的函数一: 
		57.c 由利润用分段函数，计算奖金的函数二: switch...case
		58.c 前两个例子的综合: 用函数调用，分别两次计算奖金
		59.c 输入一行字符，分别统计英文字母、空格、数字和其他字符的个数
		60.c 求和s=a+aa+aaa+...+aaa(n个)aaa请输入a,n
		61.c 求1000以内的 完数：所有的因子的和等于它自身。如6=1+2+3
		62.c 输入初始值，用牛顿迭代法求方程的根
		63.c 二分法求方程的根  //todo
		64.c 多重for循环: 找到三对运动员对抗赛名单
		65.c 用筛法求N以内的素数
		66.c N个数的选择法排序（从小到大）
		67.c 在已有升序数组中插入一个数字
		68.c 打印杨辉三角的前N行
		69.c 输出n（0-20间的奇数）阶魔方阵(各行与各列的和都相等的矩阵)
		70.c while(1): 电子词典效果
		71.c 3种指针的区别： const char *p, char const *p, char *const p
		72.c 在已有升序数组中插入一个数字。应用函数。仅一个中间变量
		73.c 二分法在升序数列中查找数字，函数法实现
		74.c 识别矩阵鞍点，函数实现(鞍点：此元素是这一行的最大值，同时是这一列的最小值)
		
		