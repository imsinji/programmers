#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    my_string.append(" ");
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
    return answer;
}