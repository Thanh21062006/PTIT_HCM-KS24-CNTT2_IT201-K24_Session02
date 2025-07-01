#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Mời bạn nhập vào số lượng phần tử cho mảng: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof *arr);
    if (arr == NULL) {
        printf("Không cấp phát được bộ nhớ!");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Mời bạn nhập giá trị phần tử thứ %d: ", i+1);
        scanf ("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n ; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    printf("Giá trị lớn nhất trong mảng vừa nhập vào là: %d", max);

    return 0;
}