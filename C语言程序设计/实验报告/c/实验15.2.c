#include <stdio.h>

void andian()
{
	int i,j,t;
	int a[4][4]={1,8,4,2,4,9,2,6,1,6,1,2,0,6,2,4};
	for(i=0;i<4;i++)
	{
		t=0;
		for(j=0;j<4;j++)
		{
			if(a[i][j]>a[i][t])
			t=j;
		}
		for(j=0;j<4;j++)
		{
			if(a[i][t]>a[j][t])
				break;
		}
		if(j==4)
			printf("(%d,%d)%d\n",i,t,a[i][t]);
	}
}

int main()
{
	andian();
	
}
