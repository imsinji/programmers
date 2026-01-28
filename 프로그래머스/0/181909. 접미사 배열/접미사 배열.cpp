#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    for (int i = 0; i < my_string.size(); i++) {
        answer.emplace_back(my_string.cbegin()+i, my_string.cend());
    }
    sort(answer.begin(), answer.end());
    return answer;
}