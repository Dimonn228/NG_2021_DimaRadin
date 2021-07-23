#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    cout << "Vvedite chislo: ";
    cin >> number;

    for (int i = 0; i < number; i++){

        cout << i << ", ";
    }

    cout << number;

    return 0;
}
