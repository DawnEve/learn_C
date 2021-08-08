//动态链表
#include<stdio.h>
#include<stdlib.h>

//定义类型
struct Student{
	int sid;
	char name[20];
	struct Student *next;
};

//动态创建链表
struct Student* CreateLink(int );

int main(){
	struct Student *head, *h;
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

struct Student* CreateLink(int N){
	int i;
	struct Student *head, *tmp, *pre;
	head=(struct Student*)malloc(sizeof(struct Student)); //头结点是空的
	pre=head;
	printf("input %d student info: id name\n", N);
	for(i=0; i<N; i++){
		tmp=(struct Student*)malloc(sizeof(struct Student));
		scanf("%d %s", &(tmp->sid), tmp->name );
		pre->next=tmp;
		pre=tmp;
	}
	pre->next=NULL; //最后一个节点没有后继
	return head;
}
