//WAP to find a square of all elements from a given 1D array.


#include<stdio.h>
int main(){
	
	int n,i;
	int a[n];
	int s[n];
	
	printf("Enter the array size:");
	scanf("%d",&n);
	
	printf("enter the array elements:\n");
	for(i=0;i<n;i++){
		
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	
	}
	
	printf("Square of the array elements are:\n");
	for(i=0;i<n;i++){
		
		s[i]=a[i]*a[i];
		printf("%d\n",s[i]);
	}
	
	return 0;
	
}
