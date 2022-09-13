/*
****************************************************************
*              字符串函数库  my_string.c
*/
int my_strlen(char *p);

void my_strcopy(char *ps_dest, char *ps_source, int m);


/*
* 函数原型：int my_strlen(char *p);
* 实现功能：求字符串长度
* 输入项 ：共1个（字符串指针）;
* 返回值 :字符串长度;
*/
int my_strlen(char *p){
	int n = 0;
	while (*p++){
		n++;
		//p++;
	}
	return n;
}


/*
* 函数原型：void my_strcopy(char *ps_dest, char *ps_source, int m);
* 实现功能：从第二个字符串的第m个字符开始复制到第一个字符串之后
* 输入项 ：共3个（目标字符串指针, 源字符串指针, 开始复制字符数）;
* 返回值 :无;
*/
void my_strcopy(char *ps_dest, char *ps_source, int m){
	int n = 0;
	if (my_strlen(ps_source) < m)  exit(0);
	
	while(*ps_dest != '\0'){
		*ps_dest++;
	}

	while (n<m){
		n++;
		ps_source++;
	}
	
	while (*ps_source != '\0'){
		*ps_dest++ = *ps_source++;
	}

	*ps_dest = '\0';
}