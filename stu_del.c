#include<stdio.h>
#include"student.h"

void delRecord(str **ptr)
{
	char op;
	printf("R/r : Enter rollno number to delete\n");
	printf("N/n : Enter name to delete\n");
	scanf(" %c",&op);
	if(*ptr==0)
	{
		printf("no record found\n");
		return;
	}
	if(op=='r' || op=='R')
	{
		int rol;
		printf("enter the rollno to delete\n");
		scanf(" %d",&rol);
		str *del=*ptr, *prev;
		while(del)
		{
			if(del->rollno==rol)
			{
				if(del==*ptr)
					*ptr=del->next;
				else
					prev->next=del->next;
				free(del);
				return;
			}
			prev=del;
			del=del->next;
		}
	}
	if(op=='n' || op=='N')
	{
		char s[50];
		printf("enter the name to delete\n");
		scanf("%s",s);

		str *del=*ptr,*prev;
		while(del)
		{
			if(strcmp(s,del->name)==0)
			{
				if(del==*ptr)
					*ptr=del->next;
				else
					prev->next=del->next;
				free(del);
				printf("deleted node successfully");
				return ;
			}
			prev=del;
			del=del->next;
		}
	}
}




