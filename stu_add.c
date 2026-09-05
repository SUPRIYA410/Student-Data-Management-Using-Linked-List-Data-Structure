#include"student.h"


void addRecord(str **ptr)
{
	str *new, *first, *temp;
	int i=1;

	/* Dynamic memory for new node*/
	new = malloc(sizeof(str));

	printf("enter the name,percentage\n");
	scanf("%s%f",new->name,&new->percentage);

	if(new->percentage<0 || new->percentage>100){
		printf("invalid percentage\n");
		return;
	}

	/* If no memory is allocated*/
	if(new==0) 
	{
		printf("Memory not found\n");
		return;
	}

	/* Find Smallest rollno */
	first = *ptr;
	while(first!=0)
	{
		if(first->rollno == i){
			i++;
			first= *ptr;
		}
		else {
			first=first->next;
		}
	}
	new->rollno = i;
	new->next=0;

	/* First node */
	if(*ptr==0)
		*ptr=new;
	else if(new->rollno < (*ptr)->rollno)
	{
		new->next = *ptr;
		*ptr = new;
	}
	else{
		temp=*ptr;
		while(temp->next != 0 && temp->next->rollno < i){
			temp=temp->next;
		}
		new->next = temp->next;
		temp->next =new;
	}


}

