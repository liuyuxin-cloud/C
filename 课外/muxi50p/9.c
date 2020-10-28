//给定一个日期，输出这个日期是该年的第几天
#include <stdio.h>
int main (void)
{
	int a,b,c;
	int t = 0;
	printf("给定一个日期");
	scanf("%d%d%d",&a,&b,&c);

	
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0){
		switch (b){
			case 1: t = 0;                                                      break;
			case 2: t = 31;                                                     break;
			case 3: t = 31 + 29;                                                break;
			case 4: t = 31 + 29 + 31;                                           break;
			case 5: t = 31 + 29 + 31 + 30;                                      break;
			case 6: t = 31 + 29 + 31 + 30 + 31;                                 break;
			case 7: t = 31 + 29 + 31 + 30 + 31 + 30;                            break;
			case 8: t = 31 + 29 + 31 + 30 + 31 + 30 + 31;                       break;
			case 9: t = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;                  break;
			case 10: t = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;            break;
			case 11: t = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;       break;
			case 12: t = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;  break;
		}
	}
	else{
		switch (b){
			case 1: t = 0;                                                      break;
			case 2: t = 31;                                                     break;
			case 3: t = 31 + 28;                                                break;
			case 4: t = 31 + 28 + 31;                                           break;
			case 5: t = 31 + 28 + 31 + 30;                                      break;
			case 6: t = 31 + 28 + 31 + 30 + 31;                                 break;
			case 7: t = 31 + 28 + 31 + 30 + 31 + 30;                            break;
			case 8: t = 31 + 28 + 31 + 30 + 31 + 30 + 31;                       break;
			case 9: t = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;                  break;
			case 10: t = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;            break;
			case 11: t = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;       break;
			case 12: t = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;  break;
		}
	}
	t += c;
	printf("这是这年的第%d天",t);
	
	return 0; 
 } 
