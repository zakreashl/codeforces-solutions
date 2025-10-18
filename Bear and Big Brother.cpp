#include <iostream>

using namespace std;

int main() {
    int limak;
    cin >> limak;
    int bob;
    cin >> bob;

    int i = 0;

    while(true) {
        if(limak > bob) {
            cout << i;
            return 0;
        }

        bob *= 2;
        limak *= 3;

        i++;
    }

    return 0;
}