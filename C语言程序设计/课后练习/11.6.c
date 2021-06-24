#include <stdio.h>
#include <stdlib.h>
struct Link
{
	int data;
	struct Link *next;
};
struct Link *head;
struct Link *CreateNode (int nodeNumbers);
void DispLink (struct Link *head);
struct Link *DelNode (struct Link *p, struct Link *ptr); 

void DispLink (struct Link *head)
{
	struct Link *p;
	int j=1;
	p= head;
	do
	{
		printf("%5d%10d\n", j,p->data);
		p=p->next;
		j++;
	}while (p!= NULL);
}

struct Link *DelNode (struct Link*p, struct Link *pr)
{
	if (p == head)
	{
		head =p->next;
		free (p);
		return (head);
		}
	if (p->next ==NULL)
	{
		pr->next=NULL;
		free (p);
		return (head);
	}
	else
	{
	pr->next =p->next;
	free (p);
	return (pr->next);
	}
}
void main()
{
	int i = 0, nodenum = 25;
	struct Link *p, *pr;
	head = NULL;
		for (i=0;i< 25; i++)
		{
			if(i==0)
			{
				head - CreateNode (i);
				pr = head;
			}
			else
			{
				pr->next = CreateNode (i);
				pr = pr->next;
			}
		}
	DispLink (head);
	i= 1;
	p=head;
	for(; ;)
	{
	if(i%3==0)
	{
		p= DelNode (p,pr);
		i++;
		nodenum--;
	}
	if (nodenum< 3)
		break;
	else
	{
	pr = p;
	p =p->next;
	if(p == NULL)
		p= head;
	i++;
	}
 
printf("The last man is:\n");} 
DispLink  (head);
}

struct Link *CreateNode (int nodeNumbers)
{
	struct Link *p;
	p=(struct Link *)malloc (sizeof (struct Link));
	if (p == NULL)
	{
	printf ("No enough memory! ");
	exit (0);
	}	
	p->next = NULL;
	p->data = nodeNumbers + 1;
	return (p);
} 

