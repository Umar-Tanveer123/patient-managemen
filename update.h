


void update(void){
	
	printf("\n\t\t\t\t\t\tUpdating Menu");
printf("\n\t\t*******************************************************************************************\n");
	FILE* fptr1;
	FILE* fptr2;
	fptr1= fopen("record.txt","r");
fptr2= fopen("upate.txt","w+");
printf("Enter the ID of patient : ");
int rolln;
scanf("%d",&rolln);

int cont=0;
while(fread(&record,sizeof(struct patient),1,fptr1)){
	
		if(record.id==rolln){
		cont=1;
	record.id=rolln;	
		printf("\n\t\t\t\t\t\t\tRecord found\n");
			printf("\t\t\t\t\t*******************************************");
			printf("\n\t\t\t\t\tPatient  Name: %s \n",record.name);
			printf("\n\t\t\t\t\tcnic: %s\n",record.cnic);
            printf("\n\t\t\t\t\tPhone number : %lu\n",record.phn_num);
              printf("\n\t\t\t\t\tDisease : %s\n",record.disease);
            printf("\n\t\t\t\t\tPatient admitted : ");
            	if(record.isadmitted==1){
			printf("Yes");
	}
	else if(record.isadmitted==0){
			printf("No");
	}
	printf("\n\t\t\t\t\t*******************************************\n");
 fflush(stdin);
 char udate;
 printf("Press'1'to update disease : ");
 scanf("%c",&udate);
  fflush(stdin);
 if(udate=='1'){
 	    printf("Enter updated disease: ");
     gets(record.disease);
 }
  fflush(stdin);
char update;
 printf("Press'1'to update admitted or not : ");
 scanf("%c",&update);
  fflush(stdin);
 if(update=='1'){
 	    printf("Enter '1' or'0' (admitted or discharge) : ");
     	do
	{
	scanf("%d",&record.isadmitted);
	if(record.isadmitted>1||record.isadmitted<0)
	{
		printf("Enter the valid input: ");
	}
	else
	{system("COLOR 71");
		printf("\n\t\t\t\t\t\tupdating");
     	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".\n");
	system("COLOR 70");
		printf("\n\t\t\t\t\t\tUpdated\n");
		break;
	}
   }while(1);
   
 }
  fflush(stdin);

    fwrite(&record,sizeof(struct patient),1,fptr2);	
		}
		else{
		fwrite(&record,sizeof(struct patient),1,fptr2);	
		}
		
	}if(cont==0){
	printf("\nRecord not found");
}
	


fclose(fptr1);
fclose(fptr2);
	remove("record.txt");
	rename("upate.txt","record.txt");
		fflush(stdin);
	char enter;
printf("\n\t\t\t\t\tPress 'enter' or any key for menu ");
scanf("%c",&enter);

	menu();
}


