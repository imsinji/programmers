#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int solution(string myString, string pat) {
    transform(myString.cbegin(), myString.cend(), myString.begin(), ::tolower);
    transform(pat.cbegin(), pat.cend(), pat.begin(), ::tolower);
    if (myString.find(pat) != std::string::npos)
        return 1;
    return 0;
}