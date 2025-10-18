#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    string word;
    cin >> word;

    int upper = 0;

    for(int i = 0; i < word.length(); i++) {
        if(isupper(word[i])) {
            upper++;
        }
    }

    if(upper <= word.length() - upper) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    } else {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }

    cout << word;

    return 0;
}