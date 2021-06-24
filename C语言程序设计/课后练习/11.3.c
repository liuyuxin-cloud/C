#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

typedef struct
{
	char dm[5];
	char mc[11];
	int dj;
	int sl;
	long je;
}PRO;

PRO *Data_In (int n);
void Data_Out (PRO *p,int n);
void Data_Sort(PRO *p,int n);

int main()
{
	int n;
	PRO *p;
	
	printf("Input the product number: ");
	scanf("%d",&n);
	p=Data_In (n);
	if (p==NULL)
	exit(0);
	Data_Sort (p,n);
	Data_Sort (p,n);
	free(p);
}
PRO *Data_In (int n)
{
	PRO *p;
	int i;
	p=(PRO *)malloc(n*sizeof(PRO));
	if(p==NULL)
	{
		printf("Not enough Memory!");
		return (NULL);
	}
	printf("input product message(dm,mc,dj,sl):\n");
	for(i=0;i<n;i++)
	{
		printf("product %d: ",i+1);
		scanf("%4s%10s%d%d",p[i].dm,p[i].mc,&p[i].dj,p[i].sl);
		p[i].je = p[i].dj*p[i].sl;
	}
	return (p);
}
void Data_Out(PRO *p,int n)
{
	int i;
	printf("after sort:\n");
	for(i=0;i<n;i++)
	printf("%4s%10s%4d%5d%10Ld\n",p[i].dm,p[i].mc,p[i].dj,p[i].sl,p[i].je);
}
void Data_Sort(PRO *p,int n)
{
	int i,j;
	PRO swap;
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	if(strcmp(p[j].dm,p[i].dm)>0 || strcmp(p[j].dm,p[i].dm)==0&&p[j].je>p[i].je)
	{
		swap=p[i];
		p[j]=p[i];
		p[j]=swap;
	}
}

