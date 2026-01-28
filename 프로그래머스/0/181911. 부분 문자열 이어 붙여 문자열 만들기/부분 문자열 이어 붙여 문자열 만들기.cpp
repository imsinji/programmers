#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for (int i = 0; i < parts.size(); i++) {
        auto a = parts[i][0];
        auto b = parts[i][1];
        answer += my_strings[i].substr(a, b-a+1);
    }
    return answer;
}