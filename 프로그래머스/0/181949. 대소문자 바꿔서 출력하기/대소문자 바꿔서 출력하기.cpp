#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    string temp;
    for (auto s: str) {
        cout << (char)(isupper(s) ? tolower(s) : toupper(s));
    }
    return 0;
}