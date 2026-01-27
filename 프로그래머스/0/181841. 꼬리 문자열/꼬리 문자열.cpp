#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    for (auto s: str_list) {
        if (s.find(ex) == std::string::npos)
            answer += s;
    }
    return answer;
}