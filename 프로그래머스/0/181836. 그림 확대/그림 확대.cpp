#include <string>
#include <vector>

using namespace std;

string scaledString(string str, int k) {
    string result;
    for (auto s: str) {
        result += string(k, s);
    }
    return result;
}

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for (auto str: picture) {
        auto s = scaledString(str,k);
        answer.insert(answer.end(), k, s);
    }
    return answer;
}