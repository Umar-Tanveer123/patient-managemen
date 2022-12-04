#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<conio.h>

struct patient{
		char name[20];
	long  int id;

	long  int phn_num;
	char cnic[15];

	char disease[20];

	int isadmitted;
	
	
}record;	

#include"check.h"
#include"add_patient.h"
#include"menu.h"
#include"view.h"
#include"delete.h"
#include"display.h"
#include"list.h"
#include"search.h"
#include"update.h"

int main(){
		printf("\t\t\t\t\t\tPATIENT RECORD SYSTEM");
        printf("\n\t\t\t-----------------------------------------------------------------------");
	FILE* file = fopen("record.txt","r");
	
	
if(file == NULL)
	{
		file = fopen("record.txt","w");
	}
	fclose(file);
	
menu();





}
