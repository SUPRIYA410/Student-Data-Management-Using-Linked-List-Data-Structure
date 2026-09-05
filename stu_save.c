#include"student.h"

void savRec(str *ptr)
{
	if(ptr==0)
	{
	printf("No record found\n");
	return ;
	}
	/* copy data into file */
	FILE *fp=fopen("student.dat","w");
		while(ptr)
		{
			fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
			ptr=ptr->next;
		}
		printf("Data saved successfully\n");
		fclose(fp);
}
