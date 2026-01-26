#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(vector<int> num_list) {
    std::vector<int> answer = {0, 0};
    for (auto n: num_list)
        answer[n%2]++;
    return answer;
}