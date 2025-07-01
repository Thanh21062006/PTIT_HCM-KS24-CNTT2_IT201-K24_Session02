#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, x;
    printf("Moi ban nhap so luong phan tu cho mang: ");
    scanf("%d", &n);

    printf("Moi ban nhap gia tri can tim: ");
    scanf("%d", &x);

    int *arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Bo nho khong duoc cap phat!");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri cho phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    printf("Gia tri %d xuat hien %d lan.", x, count);

    return 0;
}