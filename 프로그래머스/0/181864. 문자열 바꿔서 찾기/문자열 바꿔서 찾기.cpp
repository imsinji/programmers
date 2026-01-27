#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    std::transform(myString.cbegin(), myString.cend(), myString.begin(), [](char _){ return _ == 'A' ? 'B' : 'A'; });
    return myString.find(pat) == std::string::npos ? 0 : 1;
}