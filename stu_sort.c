
#include"student.h"

void sort_name(str *ptr)
{
	int t;
	float p;
	char m[50];

	str *i;
	str *j;
	for(i=ptr; i!=0; i = i->next)
	{
		for(j=i->next; j!=0; j=j->next)
		{
			if(strcmp(i->name,j->name)>0)
			{
				t= i->rollno;
				i->rollno = j->rollno;
				j->rollno=t;

				p=i->percentage;
				i->percentage=j->percentage;
				j->percentage = p;

				strcpy(m, i->name);
				strcpy(i->name, j->name);
				strcpy(j->name, m);
			}
		}
	}
	printf("List sorted with name\n");
}

void sort_percentage(str *ptr)
{
	int t;
	float p;
	char m[50];
	str *j;
	str *i;
	//c = *ptr;
	for(i=ptr; i!=0 ; i=i->next)
	{
		for(j=i->next;j!=0;j=j->next)
		{
			if(i->percentage < j->percentage)
			{
				t=i->rollno;
				i->rollno = j->rollno;
				j->rollno = t;

				p=i->percentage;
				i->percentage = j->percentage;
				j->percentage = p;

				strcpy(m,i->name);
				strcpy(i->name, j->name);
				strcpy(j->name, m);
			}	
		}
	}
	printf("sorted with percentage successfully\n");
}

