#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int n, i;
  float s = 0, a;
  cin >> n;
  for(i=0; i<n; i++) {
        cin >> a;
        s += a;
    }
    printf("%.2f", (s/n));
}