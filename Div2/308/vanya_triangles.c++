/*
Div-2 #308
ID: ravi_rk
PROG: Vanya and Triangles
LANG: C++11
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <map>

#define INF (1<<31)
#define endl "\n"
#define DEBUG 0

using namespace std;

int main() {

    std:ios_base::sync_with_stdio(false);

    int n, point[2000][2];
    long long int ans = 0, tmp = 0;
    map<double, int> slopes;
    
    cin >> n;
    if(DEBUG)
        cout << "N : " << n << endl;

    for(int i = 0; i < n; i++) {
        cin >> point[i][0] >> point[i][1];
    }

    for(int i = 0; i < n; i++) {
        slopes.clear();
        for(int j = i+1; j < n; j++) {
            if(point[j][0] - point [i][0] == 0)
                slopes[1000]++;
            else
                slopes[(1.0*(point[j][1] - point[i][1]))/(1.0*(point[j][0] - point[i][0]))]++;
        }
        tmp = 0;
        for(map<double, int>::iterator it = slopes.begin(); it != slopes.end(); it++) {
            if(DEBUG)
                cout  << "I: " << i << ", "<< it->first << ", " << it->second << endl;
            tmp += it->second * 1LL * (n - (i+1) - it->second);
            if(DEBUG)
                cout << "tmp: " << tmp << endl;
        }
        ans += tmp/2;
    }

    cout << ans << endl;

    return 0;
}