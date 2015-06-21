/*
Div-2 #308
ID: ravi_rk
PROG: Vanya and Books
LANG: C++11
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

#define DEBUG 0

using namespace std;

template<class T> T power(T N,T P){ return (P==0)?  1: N*power(N,P-1); }

int main() {

    unsigned long long noOfBooks = 0, n, sum = 0, base = 0,recurStart = 0;
    int len = 0;

    cin >> noOfBooks;

    if(DEBUG)
    	cout << "noOfBooks: " << noOfBooks << endl;

    n = noOfBooks;
    while(n != 0){
    	n/=10;
    	len++;
    }

    if(DEBUG)
    	cout << "Length: " << len << endl;

    base = power((unsigned long long)10, (unsigned long long)len-1);

    sum += ((noOfBooks - (base - 1)) * len);

    if(base != 1)
    	recurStart = (unsigned long long)(9 * power((unsigned long long)10, (unsigned long long)(len-2)));

    while(recurStart != 0) {
    	len--;
    	sum += recurStart * len;
    	recurStart/=10;
    }

	if(DEBUG)
        cout << "Sum : ";

    cout << sum << endl;

	return 0;
}