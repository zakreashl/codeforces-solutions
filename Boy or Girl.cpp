#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string user;
    cin >> user;

    map<char, bool> my_map;

    for(int i = 0; i < user.length(); i++) {
        my_map[user[i]] = true;
    }

    if(my_map.size() % 2 != 0) {
        cout << "IGNORE HIM!";
    } else {
        cout << "CHAT WITH HER!";
    }

    return 0;
}