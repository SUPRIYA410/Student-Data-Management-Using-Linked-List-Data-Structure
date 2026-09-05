#include<stdio.h>
#include"student.h"

void revList(str **ptr)
{
	str *prev,*data,*next;
	prev=0;
	data=*ptr;
	while(data!=0)
	{
		next=data->next;
		data->next=prev;
		prev=data;
		data=next;
	}
	*ptr=prev;
	printf("List reversed successfully\n");
}
