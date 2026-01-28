#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int acc_count = 0;
    for (auto s: myString) {
        if (s != 'x')
            acc_count++;
        else {
            answer.push_back(acc_count);
            acc_count = 0;
        }
    }
    answer.push_back(acc_count);
    return answer;
}