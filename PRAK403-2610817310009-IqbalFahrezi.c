#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int langkah = (a < b) ? 1 : -1;
    for (int x = a; x != b + langkah; x += langkah) {
        int y = a + b - x;
        if (x != a) {
            printf(" - ");
        }
        printf("%d %d", x, y);
    }
    printf("\n");
    return 0;
}