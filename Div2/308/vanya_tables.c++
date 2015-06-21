/*
Div-2 #308
ID: ravi_rk
PROG: Vanya and Table
LANG: C++11
*/

#include <iostream>
#include <string>

#define DEBUG 0

using namespace std;

int main() {

    int noOfRects = 0, sum = 0;
    int x1, y1, x2, y2;
    cin >> noOfRects;

    if(DEBUG)
        cout << "noOfRects : " << noOfRects << endl;

    for(int i=0 ; i<noOfRects; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        if(DEBUG)
            cout << "Coordinates of " << i+1 << ": (" << x1 << ", " << y1 << ") (" << x2 <<", " << y2 << ")" << endl;

        for(int j=x1; j<=x2; j++) {
            for (int k=y1; k<=y2; k++) {
                sum++;
            }
        }
    }

    if(DEBUG)
        cout << "Sum: ";

    cout << sum << endl;

	return 0;
}