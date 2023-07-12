// Write all leap years from a given range into a text file.

#include<stdio.h>
 int main(){
	
	FILE *ptr;
	
	
	int sy;
	int ey;
	int i;
	
	ptr=fopen("leapyears","w");	
	
	if(ptr==NULL){
		printf("File not created..\n");
	}
	
	else{
		printf("file created...\n");
		ptr=fopen("leapyears","w");	
	
		printf("enter startingyear:");
		scanf("%d",&sy);
		
		printf("enter endyear:");
		scanf("%d",&ey);
		
	    fprintf(ptr,"leap year from %d and %d\n",sy,ey);
		for(i=sy;i<=ey;i++){
		
		if(i%4==0 || i%400==0 && i%100==0 ){
			fprintf(ptr,"%d \n",i);
		
		}
	}
	
	}

	return 0;
}
