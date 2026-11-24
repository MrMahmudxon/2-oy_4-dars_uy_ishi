
#include <stdio.h>

void square(int *p) {
    *p = (*p) * (*p);
}

int main() {
    int n;

    printf("Son kiriting: ");
    scanf("%d", &n);

    square(&n);

    printf("Kvadrati: %d\n", n);

    return 0;
}
