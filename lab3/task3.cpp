#include <iostream>

using namespace std;

int main() {
    double a, b, c, x, F;
    cout << "Vvedit a, b, c, x: ";
    cin >> a >> b >> c >> x;

    if (a < 0 && x != 0) {
        F = a * x * x + (b * b) * x;
    } 
    else if (a > 0 && x == 0) {
        F = x - (a / (x - c));
    } 
    else {
        F = 1.0 + (x / c);
    }

    cout << "Znachennya F = " << F << endl;

    return 0;
}
