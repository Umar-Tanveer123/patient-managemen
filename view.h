
void view(void){
	
	
	FILE* fptr;
		FILE* fptr1;
	fptr= fopen("record.txt","r");
fptr1= fopen("Patient-record.txt","w");
fprintf(fptr1,"\n\t\t\t\t \t\t   PATIENTS LIST");
fprintf(fptr1,"\n   ******************************************************************************************************\n");
fprintf(fptr1,"\n   SR.NO \tID\t\tNAME\t\t\t\tCNIC\t\t\tPHN-NUMBER\t\tDisease\tAdmitted");

int num=1;

while(fread(&record,sizeof(struct patient),1,fptr)){
	fprintf(fptr1,"\n\n   %-2d\t\t",num);
		fprintf(fptr1,"%-10lu",record.id);
   
 
    fprintf(fptr1,"\t%-12s\t\t",record.name);
    
 
    fprintf(fptr1,"%-13s\t",record.cnic );
    
   
 
    fprintf(fptr1,"%-11lu\t\t ",record.phn_num);
      fprintf(fptr1,"%-15s",record.disease);
      if(record.isadmitted==1){
      	fprintf(fptr1," Yes");
	  }else{
	  	fprintf(fptr1," No");
	  }
	  
        
num++;
	
	}
	fprintf(fptr1,"\n   ******************************************************************************************************\n");


fclose(fptr);
fclose(fptr1);
fflush(stdin);

}

