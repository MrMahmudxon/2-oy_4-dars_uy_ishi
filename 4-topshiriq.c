#include <stdio.h>

int findMax(int *a, int *b) {
    if (*a > *b) {
        return *a;
    } else {
        return *b;
    }
}

int main() {
    int a, b;

    printf("Birinchi sonni kiriting: ");
    scanf("%d", &a);

    printf("Ikkinchi sonni kiriting: ");
    scanf("%d", &b);

    int katta = findMax(&a, &b);

    printf("Eng katta son: %d\n", katta);

    return 0;
}