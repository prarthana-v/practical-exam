//WAP to print all even numbers from a given 2D array using Pointer.

#include<stdio.h>
main(){
	

	int z[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	

		    	
	int *ptr[100][100];
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
			ptr[i][j]=&z[i][j];
			
		}
	}
	printf("the even numbers from 1 to 9 are:\n");
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
			if(*ptr[i][j]%2==0){
				printf("%d\n",*ptr[i][j]);
			}
			
		}
	}
}
