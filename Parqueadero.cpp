#include <bits/stdc++.h>

using namespace std;

string encuentra(vector<int> s, int dato) {
    for(vector<int>::iterator it=s.begin(); it!=s.end(); it++) {
        if(*it==dato) {
            return "SI";
        }
    }
    return "NO";
}

int main() {
    int i, j, t, n;
    cin >> t;
    for(i=0; i<t; i++) {
        cin >> n;
        deque<int> espera;
        vector<int> lugares;
        string resp;
        cout << "Caso #" << i+1 << ":\n";
        for(j=0; j<n; j++) {
            cin >> resp;
            if(resp=="agregar") {
                int dato;
                cin >> dato;
                espera.push_back(dato);
            }
            else if(resp=="existe") {
                int dato;
                cin >> dato;
                cout << encuentra(lugares, dato) << endl;
            }
            else {
                lugares.push_back(espera.front());
                espera.pop_front();
            }
        }
    }
    cin.get();
    return 0;
}