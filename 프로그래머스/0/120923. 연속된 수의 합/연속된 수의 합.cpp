#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int middle = total/num;
    int m_ind = (num-1)/2;
    for (int i = 0; i < num; i++) {
        auto value = middle - m_ind + i;
        answer.push_back(value);
    }
    return answer;
}