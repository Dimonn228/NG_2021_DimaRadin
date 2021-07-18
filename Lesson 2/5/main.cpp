#include <iostream>

using namespace std;

int main()
{
	int size = 0;

	cout << "Christmas tree size: ";
	cin >> size;
	cout << endl;

	for (int i = 1; i <= size; i++) {

		for (int j = size; j > i; j--) {

			cout << " ";
		}

		for (int k = size - i; k < size + i - 1; k++) {

			cout << "*";
		}

		cout << endl;
	}

	for (int i = 1; i < 2; i++) {

		for (int j = 1; j < size; j++) {

			cout << " ";
		}

		for (int k = size - 1; k < size; k++) {

			cout << "*";
		}

	}

}

