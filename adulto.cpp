#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n>=18) {
        cout << "adulto" << endl;
    }
    else {
        cout << "joven" << endl;
    }
    cin.get();
    return 0;    
}