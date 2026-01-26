#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for (auto s: my_string) {
        answer += std::string(n, s);
    }
    return answer;
}