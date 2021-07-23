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

	cout.width(size);
	cout << "*";

	return 0;
}

