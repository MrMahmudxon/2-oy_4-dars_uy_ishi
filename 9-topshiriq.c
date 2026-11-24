#include <stdio.h>

int main() {
    int arr[5] = {15, 70, 25, 90, 40};
    int *p = arr;
    int max = *p;

    for (int i = 1; i < 5; i++) {
        if (*(p + i) > max) {
            max = *(p + i);
        }
    }

    printf("Eng katta: %d", max);

    return 0;
}