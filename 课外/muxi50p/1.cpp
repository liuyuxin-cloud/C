/*输入两门课的成绩，如果两门成绩都在60分以上。则输出“it is pass.”
只要有一门低于60分就输出“it is not pass.”
如果输入的任何一门成绩不在0-100范围内则输出“it is error.”。*/
#include <stdio.h>
int main (void)
{
	int x,y,z;
	printf("请输入两门成绩："); 
	scanf("%d%d",&x,&y);
	
	while(x < 0 || x > 100 || y < 0 || y > 100 ){
		printf("it is error");
		printf("请输入两门成绩："); 
		scanf("%d%d",&x,&y);
	}
	if(x > 60 && y > 60)
		z = 0;
	else
		z = 1;
		
	switch(z){
		case 0:  printf("it is pass");    break;
		case 1:  printf("it is not pass");break;
	}
	return 0;
}
