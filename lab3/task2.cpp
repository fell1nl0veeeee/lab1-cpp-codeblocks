#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Vvedit kilkist zadach (0-36): ";
    cin >> n;

    int ocinka = 0;
    if (n == 36) ocinka = 5;
    else if (n >= 33 && n <= 35) ocinka = 4;
    else if (n >= 18 && n <= 32) ocinka = 3;
    else if (n >= 0 && n < 18) ocinka = 2;
    else ocinka = -1;

    switch (ocinka) {
        case 5:
            cout << "Ocinka: 5" << endl;
            break;
        case 4:
            cout << "Ocinka: 4" << endl;
            break;
        case 3:
            cout << "Ocinka: 3" << endl;
            break;
        case 2:
            cout << "Ocinka: 2" << endl;
            break;
        default:
            cout << "Pomylka vvedennya!" << endl;
            break;
    }

    return 0;
}
