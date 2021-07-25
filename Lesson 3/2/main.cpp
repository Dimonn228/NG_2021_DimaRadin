#include <iostream>

using namespace std;

int main()
{
	while (true) {

		static int array[10] = { 0 };
		int card = 0, number = 0, amount = 0;

		cout << "Na kakuyu kartu polozhit? ";
		cin >> card;

		cout << "Skolko? ";
		cin >> number;

		if (number < 0){

		    cout << "Nepravilnaya summa!\n\n";
            continue;
		}

		array[card - 1] += number;

		for (int i = 0; i < 10; i++){

			cout << array[i] << " ";
		}

		for (int i = 0; i < 10; i++){

			amount += array[i];
		}

		cout << "\nSumma: " << amount << "\n\n";
	}

    return 0;
}
