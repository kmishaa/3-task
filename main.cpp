#include <iostream>

using namespace std;

int NOK(const int& a, const int& b) {
    int m = a;
    int n = b;
    while (m != n) {
        if (m > n) m -= n;
        else n -= m;
    }
    return (a * b) / n;
}

int main() {
    int n;
    cin >> n;
    int i = 1;
    int min_nok = NOK(i, n - i);
    int min_i = i;
    while (n - i > 0) {
        if (NOK(i, n - i) < min_nok) { min_nok = NOK(i, n - i); min_i = i; }
        i++;
    }
    cout << min_i << " " << n - min_i;

    return 0;
}
