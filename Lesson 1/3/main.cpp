#include <iostream>

using namespace std;

int main()
{
    unsigned int N = 0, M = 0, K = 0;

    cout << "Skolko nuzhno oreshkov: ";
    cin >> N;
    cout << "Skolko oreshkov v shiske: ";
    cin >> K;
    cout << "Skolko ona sobrala: ";
    cin >> M;

    if (N <= (K * M)){

        cout << "Da";
    }else{

        cout << "Net";
    }

    return 0;

}
