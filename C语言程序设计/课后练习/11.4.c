#include <stdio.h>
#include <stdlib.h>

struct Node_tag
{
	int score;
	struct Node_tag *next;
} ;
typedef struct Node_tag NODE;

int main()
{
	int k,a;
	NODE *head,*p,*q;
	head = (NODE *)malloc(sizeof (NODE));
	if(head==NULL)
	{
		printf("no enough memory!\n");
		return 0;
	}
	head->next=NULL;
	for(k=0;k<10;k++)
	{
		p=(NODE *)malloc(sizeof(NODE));
		if(head==NULL)
		{
			printf("no enough memory!\n");
			return 0;
		}
		printf("input the %duh student's score: ",k+1);
		scanf("%d",&a);
		p->score=a;
		q=head;
		while(q->next != NULL)
		{
			if(q->next != NULL)
			break;
			q=q->next;
		}
		p->next=q->next;
		q->next=p;
	}
	printf("after sorted: \n");
	p=head->next;
	while(p!=NULL)
	{
		printf("%d,",p->score);
		p=p->next;
	}
	printf("\n");
    p=head;
    while(p->next != NULL)
    {
    	q=p->next;
    	p->next=p->next;
    	free(q);
	}
	free(head);
}


