#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

string solution(string myString) {
    transform(myString.cbegin(), myString.cend(), myString.begin(), ::tolower);
    return myString;
}