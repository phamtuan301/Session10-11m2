#include <stdio.h>
int main() {
    int n, i, key, count = 0;
    printf("nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("nhap so nguyen can tim: ");
    scanf("%d", &key);
    int positions[n];
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            positions[count] = i;  
            count++;
        }
    }
    if (count > 0) {
        printf("phan tu %d tim thay phan tu %d tai vi tri: ", key);
        for (i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("khong tim thay phan tu %d trong mang\n", key);
    }
    return 0;
}
