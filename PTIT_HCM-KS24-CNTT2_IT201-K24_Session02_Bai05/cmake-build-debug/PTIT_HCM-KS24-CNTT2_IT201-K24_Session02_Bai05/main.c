#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Moi ban nhap so luong phan tu cho mang: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong duoc cap pgat bo nho!");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf ("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Moi ban nhap vao vi tri muon xoa trong mang: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Khong hop le!");
        return 1;
    }

    for (int i = pos-1; i < n; i++) {
        arr[i] = arr[i+1];
    }

    n = n - 1;

    printf ("Mang sau khi da xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}