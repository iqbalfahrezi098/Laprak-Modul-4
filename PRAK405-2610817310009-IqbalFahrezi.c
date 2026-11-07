#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int total = 0;
    for (int i = 1; i <= n; i++) {
        int jumlah = 0;
        for (int j = i; j >= 1; j--) {
            if (j < i) {
                printf(" + ");
            }
            printf("(%d * %d)", j, k);
            jumlah += j * k;
        }
        printf(" = %d\n", jumlah);
        total += jumlah;
    }
    printf("%d\n", total);
    return 0;
}