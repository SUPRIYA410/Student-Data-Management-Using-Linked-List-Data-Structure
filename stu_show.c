#include<stdio.h>
#include"student.h"

void showRecord(str *ptr)
{
	str *temp;
	temp = ptr;
	if(ptr==0)
	{
		printf("no record found\n");
		return;
	}
	while(temp)
	{
		printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
	       temp=temp->next;
	}	       


}
