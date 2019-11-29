//
//  Main2.cpp
//  Cpp
//
//  Created by John Gates on 22/02/16.
//  Copyright © 2016 John Gates. All rights reserved.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
 entrada|salida
 3 4    | 3
 10     | 1
 8      | 2
 11     | 3
 */

int main() {
    int n, m, i, t, j;
    cin >> n >> m;
    vector <int>x;
    for(i=0; i<n; i++) {
        cin >> t;
        x.push_back(t);
    }
    for(i=0; i<m; i++) {
        int max = *max_element(x.begin(), x.end());
        for(j=0; j<x.size() && x[j]!=max; j++) {
            ;;
        }
        int can = j;
        int inc = max/(n-1);
        int sob = max%(n-1);
        x[j] = 0;
        for(j=0; j<x.size(); j++) {
            if(j!=can) {
                x[j] += inc;
                max -= inc;
            }
        }
        if(sob>=1) {
            for(j=0; j<x.size() || sob>0; j++) {
                if(j>=x.size()) {
                	j=0;
                }
                if(sob>0 && j!=can) {
					x[j]++;
                	sob--;
            	}
            }
        }
        cout << can+1 << endl;
    }
    cin.get();
    return 0;
}