#include <stdio.h>
int main() {
    int n;
    int i;
    int j;
    int temp;
    int key;
    int left;
    int right;
    int mid;
    int index = -1;
    printf("nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("mang sau khi sap xep la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("nhap so can tim: ");
    scanf("%d", &key);
    left = 0;
    right = n - 1;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            index = mid;
            break;
        }
        if (arr[mid] > key) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    if (index != -1) {
        printf("phan tu %d duoc tim thay o vi tri: %d\n", key, index);
    } else {
        printf("khong tim thay phan tu %d trong mang\n", key);
    }
    return 0;
}
