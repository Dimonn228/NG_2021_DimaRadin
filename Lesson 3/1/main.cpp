#include <iostream>

using namespace std;

int main()
{
    int array[10] = { 0 }, num = 0, count = 0;;

    for (int i = 0; i < 10; i++) {

        cout << "VVedi nomer shkoli: ";
        cin >> array[i];
    }

    cout << "Vvedi svoyu shkolu: ";
    cin >> num;

    for (int i = 0; i < 10; i++) {

        if (array[i] == num) {

            count++;
        }

    }

    if (count != 0) {

        cout << "Ya znayu etu shkolu!";
    } else {

        cout << "Ya ne znayu etu shkolu!";
    }

    return 0;
}


