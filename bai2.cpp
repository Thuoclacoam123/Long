#include<stdio.h>

int main (int arr[],int n){
	int min = arr[0];
	int count=0;
	for (int i=0;i<n;i++){
		if(arr[i]<min){
			min = arr [i];
			count++;
		}else count = 0;
	}	
	return i;
}	


