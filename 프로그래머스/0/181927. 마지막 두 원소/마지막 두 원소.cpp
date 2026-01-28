#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    auto n = num_list.size() - 1;
    if (auto diff =num_list[n] - num_list[n-1]; diff > 0) {
        num_list.push_back(diff);
    } else {
        num_list.push_back(num_list[n]*2);
    }
    return num_list;
}