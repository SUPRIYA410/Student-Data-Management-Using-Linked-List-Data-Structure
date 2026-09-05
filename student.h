#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{
	int rollno;
	char name[50];
	float percentage;
	struct student *next;
}str;

void addRecord(str **);
void delRecord(str **);
void showRecord(str *);
void savRec(str *);
void delAllRec(str **);
void revList(str **);
void mod_rollno(str *);
void mod_name(str *);
void mod_percentage(str *);
void sort_name(str *);
void sort_percentage(str *);


