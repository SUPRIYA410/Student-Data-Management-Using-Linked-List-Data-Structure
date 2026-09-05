#include<stdio.h>
#include"student.h"
void delAllRec(str **ptr)
{
	if(*ptr==0)
	{
		printf("record not found\n");
		return ;
	}
	str *del=*ptr;
	while(del)
	{
		*ptr=del->next;
		free(del);
		del=*ptr;
	}
	*ptr=0;
	printf("successfully deletec the record\n");
}
