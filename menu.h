

void menu(void){

	printf("\n\t\t\t\t\t\tGoing to menu");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".\n");
      	Sleep(300);
	system("cls");
	system("COLOR 07");
	view();
		printf("\n\t\t\t\t\t\t\tMENU");
		printf("\n\t\t*******************************************************************************************\n");
printf("\nEnter the number to perform the operation: ");
printf("\nPress '1' to add patient record\nPress '2' to delete patient record \nPress '3' to update patient record \nPress '4' to search patient record");
printf( "\nPress '5' to display patient records \nPress '6' to exit\nSelect operation : ");
int operation;
do{
	scanf("%d",&operation);
	if(operation>6||operation <1){
		printf("Enter the valid num\n");
	}
}while(operation>6||operation <1);

switch(operation)
{
	case 1:
		printf("\n\t\t\t\t\t\t Going to add patient menu");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".\n");
      	Sleep(300);
	system("cls");
		printf("\n\t\t\t\t\t\tPATIENT-ADD-MENU");
		printf("\n\t\t-------------------------------------------------------------------------------------------\n");
		system("COLOR 70");
		 add_patient();
		break;
case 2:
		printf("\n\t\t\t\t\t\t Going to deleting menu");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".\n");
      	Sleep(300);
      	
	system("cls");
	system("COLOR 70");
	delete();
	break;
case 3:
	printf("\n\t\t\t\t\t\t Going to updating menu");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".\n");
      	Sleep(300);
	system("cls");
	system("COLOR 70");
	update();
	break;
case 4:
	printf("\n\t\t\t\t\t\t Going to searching menu");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".\n");
      	Sleep(300);
	system("cls");system("COLOR 70");
		printf("\n\t\t\t\t\t\tSEARCH-MENU");
		printf("\n\t\t-------------------------------------------------------------------------------------------\n");
		
search();
	break;
case 5:	
printf("\n\t\t\t\t\t\t Listing the patients");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".");
      	Sleep(1000);
      	printf(".\n");
      	Sleep(300);
	system("cls");
	system("COLOR 70");
	view();
list();

break;	
case 6:	
view();
	 printf("\n\t\t\t\t\t\tThank you for using the program!");	
exit(0);
break;	

	
}
}




