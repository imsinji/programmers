#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    for (auto s: my_string) {
        if (s == alp[0])
            answer += toupper(s);
        else
            answer += s;
    }
    return answer;
}