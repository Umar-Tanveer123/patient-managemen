


void add_patient(){
	
	FILE* fptr;
	  fflush(stdin);

	//id taking
	do{
char id [10];
fflush(stdin);
	printf("\nEnter ID of the patient: ");
	gets(id);
   int x=atoi(id);
check(x);
record.id=x;
if(strlen(id)>0&&strlen(id)<12){
  		break;
	  }
  	  	}while(1);
  //name taking
 do{
 fflush(stdin);
 	printf("Enter  Name: ");
    gets(record.name);
} while(strlen(record.name)==0);



    //number taking
   
	do{
 char pn [13];
  	printf("Enter phone number : ");
  	gets(pn);
  	long  int  z;
	  z=atoi(pn);
  	record.phn_num=z;
  	if(strlen(pn)>0&&strlen(pn)<12){
  		break;
	  }
  	  	}while(1);
  	  	
  	  	
  	  	
  	  	
 //cnic
// char cn [13];
do{

  	printf("Enter CNIC of 13 length : ");
     gets(record.cnic);
//     long int y=atoi(cn);
//      record.cnic=y;
if(strlen(record.cnic)>0&&strlen(record.cnic)<14){
	break;
}
}while(1);
    
      
   
    
 
 
  //disease
  do{printf("Enter the disease of patient :");
	gets(record.disease);

  }while(strlen(record.disease)<=0);
	fflush(stdin);  	
	//admitted
	printf("Enter '1' if you want the patient to be admitted or '0' for not : ");
	do
	{
	scanf("%d",&record.isadmitted);
	if(record.isadmitted>1||record.isadmitted<0)
	{
		printf("Enter the valid input: ");
	}
	else
	{
	
		break;
	}
   }while(1);
   
	if(record.isadmitted==1){
			printf("\nPatient admitted\n");
	}
	else if(record.isadmitted==0){
			printf("\nPatient not admitted\n");
	}

	fptr= fopen("record.txt","a");
fwrite(&record,sizeof(struct patient),1,fptr);
	fclose(fptr);
		printf("---------------------------------------------------------------");
	menu();
	
}

