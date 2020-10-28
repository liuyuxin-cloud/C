/*假设一个班有n(n<=50)个学生，每人考m(m<=5)门课，
求每个学生的平均成绩和每门课的平均成绩，
并输出各科成绩均大于等于平均成绩的学生数量。*/
#include <stdio.h>
int main (void)
{
	int a[50][5] = {0};
	int n,m ;	
	int i,j ;
	int sum  = 0 ;//求总分 
	double pa[50] = {0} ;
	double sa[5] = {0} ;//分别为各学生平均成绩和每门课平均成绩 
	
	printf("请输入学生人数和考试科目数：");
	scanf("%d %d",&n,&m);
	
	printf("请依次输入各学生成绩：");
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < m ; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	//求每个学生的平均成绩
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < m ; j++){
			sum += a[i][j];
		}
		pa[i] = sum / m ;
		printf("第%d名学生的平均成绩是%.2f\n",i + 1,pa[i]);
		sum = 0; 
	} 
	for(j = 0 ; j < m ; j++){ 
		for(i = 0 ; i < n ; i++){
		
			sum += a[i][j];
		}
		sa[j] = sum / n ;
		sum = 0;
		printf("第%d门学科的平均成绩是%.2f\n",j + 1,sa[j]);
	} 
	return 0;
}

