#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list, int n) {
    auto found = std::find(num_list.cbegin(), num_list.cend(), n);
    return found == num_list.cend() ? 0 : 1;
}