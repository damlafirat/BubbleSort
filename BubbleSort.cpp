#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[], int n){
	
	for(int i = 0; i < n; i++){
		
		if(arr[i]>arr[i+1]){
			
			for(int j = 0; j < n-1; j++){
				
				if(arr[j]> arr[j+1]){
					
					int temp = arr[j+1];
					arr[j+1] = arr[j];
					arr[j] = temp;	
				}
					for(int k = 0; k < n; k++){
						
						if(k != n-1)
						printf("%d - ", arr[k]);
						
						else
						printf("%d", arr[k]);
					}
					
					printf("\n");
			}
			
			printf("\n");
		}
	}
}

int main(){
	
	int arr[] = {5,1,4,2,8};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	bubbleSort(arr, size);
	
	system("pause");
	return 0;
}
