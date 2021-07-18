#include <iostream>

using namespace std;

int main()
{
    int stars = 0;

    cout << "Vvedi chislo zvezd: ";
    cin >> stars;

    for (int i = 0; i < stars; i++)
        cout << "*";

    return 0;
}
