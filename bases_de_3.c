#include <stdio.h>

int f(int n) {
    if(n>=3) {
        f(n/3);
        printf("%d", (n%3));
    }
    else {
        printf("%d", n);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}