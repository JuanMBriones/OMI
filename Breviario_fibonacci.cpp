#include <stdio.h>

using namespace std;

long long int v[50] = {0};

long long int f(int n) {
    if(v[n]!=0) {
        return v[n];
    }
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }
    v[n] = f(n-1)+f(n-2);
    return v[n];
}

int main() {
    int i, j, k;
    scanf("%d", &i);
    /*for(i=0; i<50; i++) {
        printf("%lld\n", f(i));
    }*/
    printf("%lld\n", f(i));
    scanf("%d", &j);
    printf("%lld\n", f(j));
    scanf("%d", &k);
    printf("%lld\n", f(k));
    return 0;
}
