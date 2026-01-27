#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (auto s: my_string) {
        answer += isupper(s) ? tolower(s) : toupper(s);
    }
    return answer;
}