#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

struct StuMsg
{
	char no[10];
	float score;
};

 struct StuMsg *StuMsg_In (int num)
 {
 	int i;
 	struct StuMsg *p;
 	p=(struct StuMsg *) malloc (num*sizeof(struct StuMsg));
 	if(p == NULL)
 	{
 		printf("Not enough memory!");
 		return (NULL);
	 }
	 for(i=0;i<num;i++)
	 {
	 	printf("Student %d: ",i+1);
	 	scanf("%s%f",p[i].no,&p[i].score);
	 }
	 return (p);
 }
 struct StuMsg GetMinStuMsg (struct StuMsg *pstu,int num)
 {
 	int i,k;
 	k=0;
 	for(i=1;i<num;i++)
 	if(pstu[i].score<pstu[k].score)
 	k=i;
 	return (pstu[k]);
 }

int main()
{
	int num;
	struct StuMsg *pstu,minstu;
	printf("input student number: ");
	scanf("%d",&num);
	pstu = StuMsg_In (num);
	if (pstu==NULL)
	  exit (0);
	minstu = GetMinStuMsg(pstu,num);
	printf("the lowest score student record is: ");
	printf("No=%s Score=%.2f\n",minstu.no,minstu.score);
	free(pstu);
 } 

