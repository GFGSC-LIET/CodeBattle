#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        if (n % 2 == 0) {
            printf("%d\n", n);
        } else {
            printf("%d\n", n + 2);
        }
    }
    return 0;
}
