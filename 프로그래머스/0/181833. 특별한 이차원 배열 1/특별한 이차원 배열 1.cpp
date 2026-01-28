#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<int> comp(n, 0);
    vector<vector<int>> answer{};
    for (int i = 0; i < n; i++) {
        answer.emplace_back(comp);
        answer.back()[i] = 1;
    }
    return answer;
}