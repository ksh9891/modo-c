#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) {
        printf("배열의 %d 번째 원소 : %d \n", i, arr[i]);
    }

    return 0;
}