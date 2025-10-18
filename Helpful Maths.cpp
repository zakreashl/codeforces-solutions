#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string ones = "";
    string twos = "";
    string threes = "";

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '1') {
            ones += "1+";
        } else if (s[i] == '2') {
            twos += "2+";
        } else if (s[i] == '3') {
            threes += "3+";
        }
    }

    string sorted = ones + twos + threes;

    cout << sorted.substr(0, sorted.length() - 1);

    return 0;
}