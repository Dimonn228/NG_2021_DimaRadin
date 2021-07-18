#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "Vvedi razmer: ";
    cin >> size;

    for (int i = 0; i < size; i++){

        for (int j = 0; j <= i; j++){

            cout << "*";
        }

        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < size; i++){

        for (int j = size; j > i; j--){

            cout << "*";
        }

        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < size; i++){

        for (int j = 0; j <= i; j++){
            cout << " ";
        }

        for (int k = size; k > i; k--){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < size; i++){

        for (int j = size; j > i; j--){
            cout << " ";
        }

        for (int k = 0; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
