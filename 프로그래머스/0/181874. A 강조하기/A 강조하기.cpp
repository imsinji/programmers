#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string myString) {
    for (auto& s: myString) {
        s = s == 'a' || s == 'A' ? toupper(s) : tolower(s);
    }
    return myString;
}