#include <stdio.h>
int main(){
	int arr[]={3,1,17,20,9};
	int n = sizeof(arr)/sizeof(int);
	printf("mang khi chua sap xep: ");
	for (int i=0;i<n;i++){
		printf("%d  ", arr[i]);
	}
	for (int i=0;i<n;i++){
		int key = arr[i];
		int j= i - 1;
		while(j>=0 && arr[j]> key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	printf("\n");
	printf("mang sau khi da sap xep la: ");
	for (int i=0; i<n; i++){
		printf("%d  ", arr[i]);
	}
	return 0;
}