#include<stdio.h>
void main()
{
	char *ballcolor[]={"RED","YELLOW","BLUE","WHITE","BLACK"};
	int i,j,k,m=0;
	for(i=0;i<5;i++)
	for(j=i+1;j<5;j++)
	for(k=j+1;k<5;k++)
	{
		m++;
		printf("%d:%s,%s,%s\n",m,ballcolor[i],ballcolor[j],ballcolor[k]);
	}
 } 

