// rand1: ANSI C 可移植算法，可设置种子

static unsigned long int next=1; /* 随机数种子 */
// 由于 next 是static 的，只有该文件能访问它

unsigned int rand1(void){
	//生成伪随机数的魔术公式
	next= next * 1103515245 + 12345;
	return (unsigned int) (next / 65536) % 32768;
}

void srand1(unsigned int seed){
	next=seed;
}