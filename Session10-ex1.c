#include <stdio.h>
int main(){
	int arr[5]={10,54,89,44,30};
	int inp, found;
	printf("nhap gia tri phan tu can tim: ");
	scanf("%d", &inp);
	for (int i=0; i < 5; i++){
		if(inp == arr[i]){
			printf("phan tu %d nam trong mang tai vi tri %d", inp, i+1);
			found++;
			break;
		}
	}
	if (found == 0){
		printf("phan tu %d khong thuoc mang", inp);
	}
	return 0;
}