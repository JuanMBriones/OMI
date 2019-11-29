#include <iostream>

using namespace std;
/*
Los años bisiestos son divisibles entre 4, excepto si es 
divisible entre 100, excepto si es divisible entre 400
*/
int main() {
    int n;
    cin >> n;
    if(((n%4)==0 && (n%100)!=0) || ((n%100)==0 && (n%400)==0)) {
        cout << "Es bisiesto" << endl;
    }
    else {
        cout << "No es bisiesto" << endl;
    }
    cin.get();
    return 0;    
}