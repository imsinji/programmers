#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    string temp;
    for (auto s: str) {
        temp += isupper(s) ? tolower(s) : toupper(s);
    }
    cout << temp;
    return 0;
}