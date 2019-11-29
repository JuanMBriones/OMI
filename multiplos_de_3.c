#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    if((n%3)) {
        n += 3-(n%3);
    }
    while(n<=m) {
        printf("%d\n", n);
        n += 3;
    }
    return 0;
}