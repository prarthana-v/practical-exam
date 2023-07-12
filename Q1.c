//Q.1 WAP to print all even numbers from a given range using UDF.

#include<stdio.h>

	
int oddnum(){
	int i;
	for(i=0;i<=50;i++){
		
		if(i%2!=0){
			printf("\n%d",i);
		}
	}
}

main()
	{	
	
	printf("The odd numbers from 1 to 50 numbers are:");
	
		oddnum();
	}

