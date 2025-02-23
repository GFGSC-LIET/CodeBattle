#include <stdio.h>
#include <stdlib.h>

int maxHeight = 0;

void findMaxHeight(int *rods, int n, int index, int sum1, int sum2) {
    if (index == n) {
        if (sum1 == sum2) {
            if (sum1 > maxHeight) maxHeight = sum1;
        }
        return;
    }
    findMaxHeight(rods, n, index + 1, sum1 + rods[index], sum2);
    findMaxHeight(rods, n, index + 1, sum1, sum2 + rods[index]);
    findMaxHeight(rods, n, index + 1, sum1, sum2);
}

int main() {
    int n;
    scanf("%d", &n);
    int rods[n];
    for (int i = 0; i < n; i++) scanf("%d", &rods[i]);
    findMaxHeight(rods, n, 0, 0, 0);
    printf("%d\n", maxHeight);
    return 0;
}
