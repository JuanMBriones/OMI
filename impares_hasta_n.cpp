#include <iostream>

using namespace std;
/*
10 25
1+3+5+7+9 = 25
*/
int main() {
    int n, i;
    long int s = 0;
    cin >> n;
    for(i=1; i<n; i+=2) {
        s += i;
    }
    cout << s << endl;
    cin.get();
    return 0;
}