#include<stdio.h>
#define NUM 15

int main()
{
	int str[NUM] = {1,8,5,7,8,4,9,0,10,27,53,33,12,17,18};
	int i,j,border=NUM-1,index=0,flag=0;
	for(i=NUM-1;i>0;i--)
	{
		flag=1;
		for(j=0;j<border;j++)
		{
			if( (str[j]%2==0 && str[j+1]%2==0 && str[j]>str[j+1]) || (str[j]%2==1 && str[j+1]%2==1 && str[j]>str[j+1]) || (str[j]%2==0 && str[j+1]%2==1))
			{
				str[j]=str[j]+str[j+1];
				str[j+1]=str[j]-str[j+1];
				str[j]=str[j]-str[j+1];
				index = j;
				flag = 0;
			}	
		}
		border = index;
		if(flag)
		break; 
	}
	for(i=0;i<NUM;i++)
	i==NUM-1?printf("%d",str[i]):printf("%d,",str[i]);
}
