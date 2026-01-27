#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for (size_t i = 1; i <= n; i += 2) {
        answer.push_back(i);
    }
    return answer;
}