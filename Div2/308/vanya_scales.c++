/*
Div-2 #308
ID: ravi_rk
PROG: Vanya and Scales
LANG: C++11
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

#define DEBUG 0

using namespace std;

int main() {

    unsigned long long w = 0 , m = 0;
    int a[100], i = 0, flag = 0;

    cin >> w >> m;

    if(DEBUG)
    	cout << "Wight : " << w << ", Mass : " << m << endl;

    while(m) {
        a[i++] = m % w;
        m /= w;
    }

    for (int j=0 ; j < i; j++) {
        if(a[j] != 0 && a[j] != 1 && a[j] != w-1 && a[j] != w) {
            flag = 1;
            break;
        } else if(a[j] == w-1 || a[j] == w) {
            a[j+1]++;
        }
    }

    if(flag)
        cout << "NO\n";
    else
        cout << "YES\n";

	return 0;
}