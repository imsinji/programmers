#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> can = {"aya", "ye", "woo", "ma"};
    for (auto& str: babbling) {
        for (const auto& c: can) {
            if (auto found = str.find(c); found != string::npos) {
                str.replace(found, c.size(), " ");
            }
        }
        if (str == string(str.size(), ' '))
            answer++;
    }
    return answer;
}