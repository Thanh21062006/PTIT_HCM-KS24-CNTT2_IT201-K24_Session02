#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Moi ban nhap so luong phan tu cho mang: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("khong duoc cap phat bo nho");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap gia tri cho phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Mang vua nhap: \n");
    for (int i = 0; i < n ;i++) {
        printf("%d ", arr[i]);
    }

    int temp;
    for (int i = 0; i < n/2 ; i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    printf("\nMang sau khi dao nguoc: \n");
    for (int i = 0; i < n;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}