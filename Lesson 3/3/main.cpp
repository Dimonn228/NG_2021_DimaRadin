#include <iostream>

using namespace std;

int main()
{
	int array[5] = { 0 };

	cout << "Values: " << endl;

	for (int i = 0; i < 5; i++)
		cin >> array[i];

	for (int i = 0; i < 5; i++) {

		for (int n = 0; n <= array[i]; n++) {

			for (int j = 0; j < 5; j++) {

				if (array[j] > 0) {

					cout << "*";
				}
				else {

					cout << " ";
				}
			}

			for (int k = 0; k < 5; k++)
				array[k]--;

			cout << endl;
		}
	}

	return 0;
}

