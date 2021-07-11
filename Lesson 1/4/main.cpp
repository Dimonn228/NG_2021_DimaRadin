#include <iostream>

using namespace std;

int main()
{
    int salary = 0;

    cout << "Vvedi zarplatu: ";
    cin >> salary;

    if (salary < 1000)
        cout << "Rabotai bolshe";

    if (salary > 999){
        if (salary < 1000000)
            cout << "Kruto";
    }

    if (salary > 999999)
        cout << "Da ti millioner";

    cout << ", no ti molodec!";

    return 0;
}
