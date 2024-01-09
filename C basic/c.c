#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int dist = (int)sqrt((i - n / 2) * (i - n / 2) + (j - n / 2) * (j - n / 2));
            printf("%d ", dist + 1);
        }
        printf("\n");
    }
    return 0;
}
