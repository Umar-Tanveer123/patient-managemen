
void search(void)
{
	FILE *fptr;
	fptr=fopen("record.txt","r");
	printf("Enter the ID of the patient to search the record: ");
	long int rec;
	scanf("%ld",&rec);
	
	int count=0;
	while(fread(&record,sizeof(struct patient),1,fptr))
	{
		if(record.id==rec)
		
		{
			printf("The patient record is present!\n");
			printf("---------------------------------------------------------------");
			count=1;
	display();
		menu();
		}
		  
	}
	if(count==0){
		printf("\nNo such record found!\n");
		printf("---------------------------------------------------------------");
	}
	fclose(fptr);
	menu();
}

