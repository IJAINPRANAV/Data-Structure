#include<stdio.h>
#include<stdlib.h>
struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
};
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",a[i]);
	}
	struct tree *p,*start;
	start=(struct tree*)malloc(sizeof(struct tree));
	p=(struct tree*)malloc(sizeof(struct tree));
	start->data=a[0];
	p=start;
	for(i=1;i<5;i++)
	{
		if(p->data>a[i])
		{
			p->left=(struct tree*)malloc(sizeof(struct tree));
			
		}
	}
}
