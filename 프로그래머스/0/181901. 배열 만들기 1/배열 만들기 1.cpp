#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    int idx = 1;
    while (k*idx <= n) {
        answer.push_back(k*idx);
        idx++;
    }
    return answer;
}