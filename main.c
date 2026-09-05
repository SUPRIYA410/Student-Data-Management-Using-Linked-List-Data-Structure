#include"student.h"

int main()
{
	struct student *head=0;
	char choice;
	char op,op1;

	while(1)
	{
		printf("\n******** STUDENT RECORD MENU ********\n");
		printf(" a/A : Add new record\n");
		printf(" d/D : Delete a record\n");
		printf(" s/S : Show the list\n");
		printf(" m/M : Modify a record\n");
		printf(" v/V : Save records\n");
		printf(" e/E : Exit\n");
		printf(" t/T : Sort the list\n");
		printf(" l/L : Delete all the records\n");
		printf(" r/R : Reverse the list\n");
		printf("--------------------------------\n");
		printf("Enter your choice: \n");
		scanf(" %c",&choice);
		
		
		switch(choice)
		{
			case 'a':
			case 'A':addRecord(&head); break;
			case 'd':
			case 'D':delRecord(&head); break;
			case 's':
			case 'S':printf("----------------------------------\n");
				 printf(" Roll.No  Name  Percentage\n");
				 printf("----------------------------------\n");
				 showRecord(head); 
				 printf("----------------------------------\n");
				 break;
			case 'm':
			case 'M':
				 printf(" r/R : Search by rollno\n");
				 printf(" n/N : Search by name\n");
				 printf(" p/P : Search with percentage\n");
				 printf("enter your option\n");
				 scanf(" %c",&op);
				 if(op>='a' && op<='z')
					 op=op-32;
				 switch(op)
				 {
					 case 'R' : mod_rollno(head); break;
					 case 'N' : mod_name(head); break;
					 case 'P' : mod_percentage(head); break;
					 default:printf("invalid option\n");
				 }
				 break;
			case 'v':
			case 'V':savRec(head); break;
			case 'e':
			case 'E':printf("S/s : Save and Exit\n");
				 printf("E/e : Exit without saving\n");
				 printf("enter your choice\n");
				 scanf(" %c",&op);
				 if(op=='s' ||op=='S')
				 {
					 savRec(head);
					 exit(0);
				 }
				 else if(op=='E' || op=='e')
				 {
					 printf("Exited without saving data..\n");
					 exit(0);
				 }
				 else
				 	 printf("invalid choice\n");
				 break;
			case 't':
			case 'T':printf("N/n : Sort with name\n");
				 printf("P/p : Sort with Percentage\n");
				 scanf(" %c",&op1);
				 if(op1>='a' && op1<='z')
					 op1=op1-32;
				 switch(op1)
				 {
					 case 'N':sort_name(head); break;
					 case 'P':sort_percentage(head); break;
					 default:printf("Invalid option\n");
				}
				break;
			case 'l':
			case 'L':delAllRec(&head); break;
			case 'r':
			case 'R':revList(&head); break;
			default: printf("invalid choice\n");

		}
	}
}
