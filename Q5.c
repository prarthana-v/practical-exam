//WAP to find the minimum number from the given 3 numbers using the ternary operator.

#include<stdio.h>
main(){
	
	int a,b,c;
	
	printf("Enter a:");
	scanf("%d",&a);
	
	
	printf("Enter b:");
	scanf("%d",&b);
	
	
	printf("Enter c:");
	scanf("%d",&c);
	
	(a<b)
			?(a<c) 
				?printf("a is minimum\n")
				:printf("c is minimum\n")
			:(b<c)
				?printf("b is minimum\n")
				:printf("c is minimum\n");
			


}
