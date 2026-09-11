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

		/* deleting record based on rollno */
		while(del)
		{
			if(del->rollno==rol)
			{
				if(del==*ptr)
					*ptr=del->next;
				else
					prev->next=del->next;
				free(del);
				printf("Deleted record successfully\n");
				return;
			}
			prev=del;
			del=del->next;
		}
		printf("Record not found\n");
	}


	if(op=='n' || op=='N')
	{
		char s[50];
		int rollno;
		printf("enter the name to delete\n");
		scanf("%s",s);
		str *temp=*ptr;

		/*Displaying all records which have same name*/
		while(temp)
		{
		if(strcmp(s,temp->name)==0)
		
			printf("%d %s %f\n",temp->rollno, temp->name,temp->percentage);
		temp=temp->next;
		}

		/* which rollno to delete*/
		printf("Enter rollno to delete\n");
		scanf("%d",&rollno);

		/* Search and delete using name, rollno */
		str *del=*ptr, *prev=0;
		while(del)
		{
			if(strcmp(s,del->name)==0 && rollno==del->rollno)
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
		printf("Record not found\n");
	}
}


