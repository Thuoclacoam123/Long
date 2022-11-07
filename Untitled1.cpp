#include<stdio.h>


int main(){
	printf("Enter 10 integers: \n");
	int arr[10];
	for ( int i=0;i<10;i++){
		scanf("%d",&arr[i]);
		
	}	
	printf("Display in the reverse order: \n");
	for(int a=9;a>=0;a--){
		printf("%d\n",arr[a]);
		
	}
}	
