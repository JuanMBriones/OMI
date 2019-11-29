#include <iostream>

using namespace std;

bool esPrimo(int n) {
    for(int i=2; i<=(n/2); i++) {
        if((n%i)==0) {
            return false;    
        }    
    }
    return true;
    
}

int main() {
    int i, n, count = 0;
    cin >> n;
    for(i=2; i<=n; i++) {
        if(esPrimo(i)==true) {
            count++;
        }    
    }
    if(count==0) {
        cout << "No existen numeros primos en la cantidad ingresada." << endl;
    }
    else {
        cout << count << endl;
    }
    return 0;
}