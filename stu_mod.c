#include"student.h"

void mod_rollno(str *ptr)
{
		int rn;
		char new_n[20];
		float new_p;

		/*If record not found */
		if(ptr==0){
			printf("Record not found\n");
			return ;
		}
		printf("enter the rollno\n");  // rollno to delete
		scanf("%d",&rn);
		/* modifying the record */
		while(ptr){
			if(ptr->rollno==rn){
				printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
				printf("enter new name,percentage\n");
				scanf("%s%f",new_n,&new_p);
				strcpy(ptr->name,new_n);
				ptr->percentage=new_p;
			}
			ptr=ptr->next;
		}
}

void mod_name(str *ptr)
{

	char n[100];
	char new_n[100];
	int c=0;
	str *temp;
	temp=ptr;

	printf("Enter name to search\n");  // name to delete
	scanf("%s",n);
	/* Common nodes with common name printing */
	while(temp){
		if(strcmp(temp->name, n)==0){
			printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
			c++;
		}
		temp=temp->next;
	}
	temp=ptr;

	int d;
	float new_p;
	/* If name is more than 1, Print all that node */ 
	if(c>1){
		printf("enter rollno to modify\n");
		scanf("%d",&d);
		while(temp){
			if(temp->rollno == d ){
				printf("enter new name ,percentage\n");
				scanf("%s%f",new_n,&new_p);

				strcpy(temp->name, new_n);
				temp->percentage=new_p;
			}
			temp=temp->next;
		}
	}
	/* If name present only one time */
	else if(c==1){
		while(temp){
			if(strcmp(temp->name, n)==0){
				printf("enter new name ,percentage\n");
				scanf("%s%f",new_n,&new_p);

				strcpy(temp->name, new_n);
				temp->percentage = new_p;
			}
			temp=temp->next;
		}
	}
	else
		printf("invalid name\n");
}


void mod_percentage(str *ptr)
{
    str *temp;
    float percentage;
    int roll;
    int found = 0;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    temp = ptr;

    while(temp != NULL)
    {
        if(temp->percentage == percentage)
        {
            printf("%d  %s  %.2f\n",
                   temp->rollno,
                   temp->name,
                   temp->percentage);

            found = 1;
        }

        temp = temp->next;
    }

    if(found == 0)
    {
        printf("Percentage not found\n");
        return;
    }

    printf("Enter roll number to modify: ");
    scanf("%d", &roll);

    temp = ptr;

    while(temp != NULL)
    {
        if(temp->rollno == roll &&
           temp->percentage == percentage)
        {
            printf("Enter new name and percentage: ");
            scanf("%s %f", temp->name, &temp->percentage);

            if(temp->percentage < 0 ||
               temp->percentage > 100)
            {
                printf("Invalid percentage\n");
                return;
            }

            printf("Record modified successfully\n");
            return;
        }

        temp = temp->next;
    }

    printf("Invalid roll number\n");
}
