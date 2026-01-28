#include <string>
#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    std::unordered_map<int, int> m;
    for (const auto& str: strArr) {
        m[str.length()]++;
    }
    for (auto a: m) {
        answer = max(answer, a.second);
    }
    return answer;
}