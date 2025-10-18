#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int x = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string comand;
        cin >> comand;

        if(comand.find('+') != -1) {
            x++;
        } else {
            x--;
        }
    }

    cout << x;

    return 0;
}