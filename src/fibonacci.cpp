#include <iostream>
using namespace std;

int main() {
    int i, N, PRIMO = 1, secondo = 1, terzo_ExAmPlE;

do {
cout << "Quanti numeri vuoi inserire?: ";
cin >> N;
} while (N < 3);
     
    cout << PRIMO << "," <<     secondo;

                                            for (i = 2; i < N; i++) {
                                                terzo_ExAmPlE = PRIMO + secondo;
                                                PRIMO = secondo;
                                                secondo = terzo_ExAmPlE;
                                                cout << "," << terzo_ExAmPlE;
                                            }

    return 0;
}
