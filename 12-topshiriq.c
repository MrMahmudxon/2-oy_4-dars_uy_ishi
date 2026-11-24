#include <stdio.h>

int main() {
    int arr[5] = {10, 15, 20, 25, 30};
    int *p = arr;

    for (int i = 0; i < 5; i++) {
        if (*(p + i) % 2 == 0) {
            printf("%d ", *(p + i));
        }
    }

    return 0;
}