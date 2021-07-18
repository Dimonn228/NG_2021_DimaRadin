#include <iostream>

using namespace std;

int main()
{
    int firstNum = 0, secondNum = 0, act = 0;

    cout << "Vvedite pervoe chislo: ";
    cin >> firstNum;
    cout << "Vvedite vtoroe chislo: ";
    cin >> secondNum;
    cout << "Vvedite deistvie: ";
    cin >> act;

    cout << "Resultat: ";

    switch (act) {

    case 1:
        cout << firstNum + secondNum;
        break;
    case 2:
        cout << firstNum - secondNum;
        break;
    case 3:
        cout << firstNum * secondNum;
        break;
    case 4:
        cout << firstNum / secondNum;
        break;
    default:
        cout << "Nepravilnoe chislo deistviya!";
    }

    return 0;
}

