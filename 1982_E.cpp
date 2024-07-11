#include <stdio.h>

#define MAX_N 200000
#define MAX_M 100

int A[MAX_N], B[MAX_N], count[MAX_M];

int main(void) {
    int t, n, m, i;
    scanf("%d", &t);

    while (t--) {
        scanf("%d%d", &n, &m);

        for (i = 0; i < m; i++) {
            count[i] = 0;
        }

        for (i = 0; i < n; i++) {
            scanf("%d", &B[i]);
            count[B[i] % m]++;
        }

        long long total = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &A[i]);
            total += count[(m - A[i] % m) % m];
        }

        printf("%lld\n", total);
    }

    return 0;
}
