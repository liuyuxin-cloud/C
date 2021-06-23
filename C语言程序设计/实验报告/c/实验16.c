#include <stdio.h>
#include <malloc.h>
#include <string.h>
#define NUM 4

char *name[NUM] = {"zhangsan","lisi","wangwu","zhaoliu"};

typedef struct student_info{
	int id;
	char name[20];
	struct student_info *next;
}student,*pstudent;

pstudent CreateList(){
	int i;
	pstudent head,tail,pnew;
	head = (pstudent)malloc(sizeof(student));
	head->next = NULL;
	tail = head;
	for(i = 0 ; i < NUM ; i++){
		pnew = (pstudent)malloc(sizeof(student));
		pnew->id = i+1;
		strcpy(pnew->name,name[i]);
		pnew->next = NULL;
		tail->next = pnew;
		tail = pnew;
	}
	return head;
} 

void showlist(pstudent head){
	pstudent p = head->next;
	while(p != NULL){
		printf("%d	%s\n",p->id,p->name);
		p = p->next;
	}
}

void inverselist(pstudent head){
	pstudent p,q = head->next;
	if(q == NULL){
		return;
	}
	p = q->next;
	q->next = NULL;
	while(p != NULL){
		q = p->next;
		p->next = head->next;
		head->next = p;
		p = q;	
	}
}

int main(){
	pstudent studentlist = CreateList();
	showlist(studentlist);
	inverselist(studentlist);
	showlist(studentlist);
}
