#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

string solution(string myString) {
    string answer = "";
    transform(myString.cbegin(), myString.cend(), std::back_inserter(answer), ::toupper);
    return answer;
}