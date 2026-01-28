#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp;
    for (auto s: my_string) {
        if (s == ' ') {
            if (temp != "") {
                answer.push_back(temp);
                temp = "";
            }
        } else {
            temp += s;
        }
    }
    if (temp != "")
        answer.push_back(temp);
    return answer;
}