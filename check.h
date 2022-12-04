

void check(int a){
	
	FILE *ptr;
	ptr=fopen("record.txt","r");
	
	while(fread(&record,sizeof(struct patient),1,ptr)){
	
	if(record.id==a){
			fclose(ptr);
			printf("\nUser id exist\n");
		
		add_patient();
			

		
	}
		
	}

	fclose(ptr);

}


