#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cout << "Vvedit 3 chisla (a, b, c): ";
    cin >> a >> b >> c;

    int max_v = a, min_v = a, mid_v = a;

    if (b > max_v) max_v = b;
    if (c > max_v) max_v = c;

    if (b < min_v) min_v = b;
    if (c < min_v) min_v = c;

    if (a != max_v && a != min_v) mid_v = a;
    else if (b != max_v && b != min_v) mid_v = b;
    else mid_v = c;

    cout << "Max: " << max_v << ", Min: " << min_v << ", Serednye: " << mid_v << endl;

    if (mid_v >= 0) {
        int r = sqrt(mid_v);
        if (r * r == mid_v)
            cout << "Serednye chislo ye tochnym kvadratom." << endl;
        else
            cout << "Serednye chislo NE ye tochnym kvadratom." << endl;
    } else {
        cout << "Serednye chislo vid'yemne." << endl;
    }

    if (max_v % 2 == 0)
        cout << "Najbilshe chislo parne." << endl;
    else
        cout << "Najbilshe chislo neparne." << endl;

    min_v = mid_v + max_v;
    cout << "nove znachyennya min (suma mid + max): " << min_v << endl;

    return 0;
}
