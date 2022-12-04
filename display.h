void display(void){
	
	 			printf("\n\t\t\t\t\tDisplaying");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".\n");
      	Sleep(300);
	system("cls");
				printf("\n\t\t\t\t\t\t\tRecord of patient\n");
			printf("\t\t\t\t\t--------------------------------------------");
			printf("\n\t\t\t\t\tPatient  Name: %s \n",record.name);
			printf("\n\t\t\t\t\tcnic: %s\n",record.cnic);
			printf("\n\t\t\t\t\tDisease : %s\n",record.disease);
            printf("\n\t\t\t\t\tPhone number : %lu\n",record.phn_num);
            printf("\n\t\t\t\t\tPatient admitted : ");
            	if(record.isadmitted==1){
						printf("Yes");
	}
	else if(record.isadmitted==0){
			printf("No");
	}
			
			printf("\n\t\t\t\t\t--------------------------------------------");
			fflush(stdin);
			char enter;
printf("\n\t\t\t\t\tPress 'enter' or any key to continue ");
scanf("%c",&enter);
	
	
	
	
	
	
}
