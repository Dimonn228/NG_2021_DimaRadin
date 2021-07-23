#include <iostream>

using namespace std;

int main()
{
	int array[20] = { 0 }, maxNumber = 0;

	cout << "Values: " << endl;

	for (int i = 0; i < 20; i++) {

		cin >> array[i];

		if (maxNumber < array[i])
			maxNumber = array[i];

		if (array[i] == 0)
			break;
	}

	for (int i = 0; i < 20; i++) {

		for (int j = 1; j <= (maxNumber - array[i]) / 2; j++) {

			cout << " ";
		}

		for (int k = 0; k < array[i]; k++) {

			cout << "*";
		}

		cout << endl;
	}

	return 0;
}

