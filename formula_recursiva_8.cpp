#include <iostream>

using namespace std;

long long int v[100] = {0};

long long int f(int n) {
    if(v[n]!=0) {
        return v[n];
    }
    if(n<4) {
        return 10;
    }
    v[n] = f(n-2)+f(n-4)+30;
    return v[n];
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    cin.get();
    return 0;
}