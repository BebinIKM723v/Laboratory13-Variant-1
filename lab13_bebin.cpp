#include <iostream>
using namespace std;

double seriesMember(int n);

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int n;
    cout << "Номер члена ряду n: ";
    cin >> n;

    cout << "Член ряду пiд номером " << n << " дорiвнює " << seriesMember(n) << endl;

    return 0;
}

double seriesMember(int n) {
    if (n == 1) {
        return 3.0;
    }
    else {
        return seriesMember(n - 1) * 0.1;
    }
}
