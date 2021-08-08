//动态链表: 使用 typedef 使链表更简洁
#include<stdio.h>
#include<stdlib.h>

//定义类型，重命名类型后，以后就不需要写 struct 前缀了
typedef struct node{ //一定要有名字，用于后续的指针声明
	int sid;
	char name[20];
	struct node *next; //内部指针还是要使用 struct
} Student; //后面定义用最后这个名字

//动态创建链表
Student* CreateLink(int );

int main(){
	Student *head, *h;
	int N=3;
	head=CreateLink(N);
	h=head;
	while(h->next != NULL){
		h=h->next;
		printf("stu: id=%d, name=%s, next=%p\n", 
			h->sid, h->name, h->next);
	}
	return 0;
}

Student* CreateLink(int N){
	int i;
	Student *head, *tmp, *pre;
	head=(Student*)malloc(sizeof(Student)); //头结点是空的
	pre=head;
	printf("input %d student info: id name\n", N);
	for(i=0; i<N; i++){
		tmp=(Student*)malloc(sizeof(Student));
		scanf("%d %s", &(tmp->sid), tmp->name );
		pre->next=tmp;
		pre=tmp;
	}
	pre->next=NULL; //最后一个节点没有后继
	return head;
}
