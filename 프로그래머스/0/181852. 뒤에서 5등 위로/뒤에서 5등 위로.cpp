#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    std::sort(num_list.begin(), num_list.end());
    std::vector<int> answer{};
    std::copy(num_list.cbegin()+5, num_list.cend(), std::back_inserter(answer));
    return answer;
}