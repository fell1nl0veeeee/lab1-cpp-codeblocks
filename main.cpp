
#include <iostream>
using namespace std;

const int SIZE = 5;

void bsort(int iArray[], int n);

int main()
{
    char ch;
    int iArray[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Please enter an integer: ";
        cin >> iArray[i];
    }

    cout << "\nWould you like to sort (Y/N)? ";
    cin >> ch;

    if (ch == 'Y' || ch == 'y')
    {
        bsort(iArray, SIZE);
    }

    cout << "\nResult: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << iArray[i] << " ";
    }

    cout << endl;
    return 0;
}

void bsort(int iArray[], int n)
{
    int t;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (iArray[j] > iArray[j + 1])
            {
                t = iArray[j];
                iArray[j] = iArray[j + 1];
                iArray[j + 1] = t;
            }
        }
    }
}
