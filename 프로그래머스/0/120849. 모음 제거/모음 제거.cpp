#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer;
    string targets = "aeiou";
    for (auto s: my_string) {
        if (targets.find(s) == std::string::npos) {
            answer += s;
        }
    }
    return answer;
}