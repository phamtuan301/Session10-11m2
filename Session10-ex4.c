#include<stdio.h>
int main(){
	int arr[]={3,9,90,15,42};
	int n = sizeof(arr)/sizeof(int);
	printf("mang truoc khi sap xep la: ");
	for (int i = 0;i<n;i++){
		printf("%d ", arr[i]);
	}
	for (int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if (arr[j]<arr[min]){
				min = j;
			}
		}
		int temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	printf("\n");
	printf("mang sau khi sap xep la: ");
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}