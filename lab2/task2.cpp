#include <iostream>
using namespace std;

int main() {
    int m = 5, n = 8;
    
    cout << "До розрахунку: m = " << m << ", n = " << n << endl;
    int result = m - (++n);
    cout << "Після розрахунку: m = " << m << ", n = " << n << endl;
    
    cout << "2. Результат: " << result << endl;
}
