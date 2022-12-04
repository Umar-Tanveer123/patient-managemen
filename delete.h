
void delete(void){
	
	printf("\n\t\t\t\t\t\tDeleting Menu");
printf("\n\t\t*******************************************************************************************\n");
	FILE* fptr1;
	FILE* fptr2;
	fptr1= fopen("record.txt","r+");
fptr2= fopen("new.txt","w+");
printf("Enter the patient id : ");
int rolln;
scanf("%d",&rolln);


int count=0;
while(fread(&record,sizeof(struct patient),1,fptr1)){
	if(record.id==rolln){
		count=1;
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
		
      int del=99;
      printf("Press '1' for delete record : ");
      scanf("%d",&del);
      if(del==1){
    system("COLOR 74");
	     	printf("\t\t\t\t\t\tDeleting");
     	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".\n");
system("COLOR 70");
	  }
	  else{
	  	fclose(fptr1);
	  	remove("new.txt");
		  menu();
		 
	  }
	}
	
	else if(record.id!=rolln){
		fwrite(&record,sizeof(struct patient),1,fptr2);
	}
}
if(count==0){
	printf("\nRecord not found");
}
else{
		printf("\n\t\t\t\t\tRecord deleted successfully\n");
}
fclose(fptr1);
fclose(fptr2);
	remove("record.txt");
	rename("new.txt","record.txt");
	fflush(stdin);
	char enter;
printf("\n\t\t\t\t\tPress 'enter' or any key for menu ");
scanf("%c",&enter);

	menu();
}


