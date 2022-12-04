
void list(void){
	
	
	FILE* fptr;
	
	fptr= fopen("record.txt","r");
	
printf("\n\t\t\t\t \t\t   PATIENTS LIST");
printf("\n   *********************************************************************************************************************\n");
printf("\n   SR.NO \tID\t\tNAME\t\t\tCNIC\t\t\tPHN-NUMBER\tDisease\t\tAdmitted");

int num=1;

while(fread(&record,sizeof(struct patient),1,fptr)){
	printf("\n\n   %-2d\t\t",num);
		printf("%-10lu",record.id);
   
 
    printf("\t%-12s\t\t",record.name);
    
 
    printf("%-13s\t\t",record.cnic );
    
   
 
    printf("%-11lu\t ",record.phn_num);
      printf("%-15s",record.disease);
      if(record.isadmitted==1){
      	printf(" Yes");
	  }else{
	  	printf(" No");
	  }
	  
        
num++;
	
	}
	printf("\n   *********************************************************************************************************************\n");


fclose(fptr);
fflush(stdin);
char enter;
printf("\n\t\t\t\t\tPress 'enter' or any key to continue ");
scanf("%c",&enter);
menu();
}

