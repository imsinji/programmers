#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
    unordered_map<int, int> m;
    int answer = 0;
    for (const auto& l: lines) {
        int s = l[0], e = l[1];
        for (int i = s; i < e; i++) {
            m[i]++;
        }
    }
    for (auto t: m) {
        if (t.second > 1)
            answer++;
    }
    return answer;
}