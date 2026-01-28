#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp;
    for (auto s: myStr) {
        if (s == 'a' || s == 'b' || s == 'c') {
            if (!temp.empty()) {
                answer.push_back(temp);
                temp.clear();
            }
        } else {
            temp += s;
        }
    }
    if (!temp.empty())
        answer.push_back(temp);
    if (answer.empty()) {
        answer.push_back("EMPTY");
    }
    return answer;
}