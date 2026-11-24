#include <stdio.h>

float average(int *a, int *b, int *c) {
    return (*a + *b + *c) / 3.0;
}

int main() {
    int a, b, c;

    printf("1-sonni kiriting: ");
    scanf("%d", &a);

    printf("2-sonni kiriting: ");
    scanf("%d", &b);

    printf("3-sonni kiriting: ");
    scanf("%d", &c);

    float natija = average(&a, &b, &c);

    printf("Ortacha qiymat: %.2f\n", natija);

    return 0;
}