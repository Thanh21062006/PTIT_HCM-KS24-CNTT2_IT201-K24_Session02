#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("moi ban nhap vao so luong phan tu cho mang: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Bo nho khong duoc cap phat!");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int index, value;
    printf("Moi ban nhap vi tri muon sua: ");
    scanf("%d", &index);

    printf("arr[%d] = ", index);
    scanf("%d", &value);

    arr[index] = value;

    printf("Mang da cap nhat: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}