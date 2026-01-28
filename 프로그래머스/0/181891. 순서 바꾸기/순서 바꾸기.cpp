#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer = std::vector<int>(num_list.cbegin()+n, num_list.cend());
    copy(num_list.cbegin(), num_list.cbegin()+n, std::back_inserter(answer));
    return answer;
}