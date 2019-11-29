#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, i, b;
    cin >> n;
    vector <long long int>a;
    for(i=0; i<n; i++) {
        cin >> b;
        a.push_back(b);
    }
    while(!a.empty()) {
        cout << a.back()*a.back() << endl;
        a.pop_back();
    }
    cin.get();
    return 0;
}