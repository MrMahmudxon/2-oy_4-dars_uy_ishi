
#include <stdio.h>

void cube(int *p) {
    *p = (*p) * (*p) * (*p);
}
int main() {
    int n;

    printf("Son kiriting: ");
    scanf("%d", &n);

    cube(&n);

    printf("Kubi: %d\n", n);

    return 0;
}
