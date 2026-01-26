#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

int solution(vector<int> sides) {
    if (sides.size() != 3)
        return 2;
    vector<int> sorted_vec{sides};
    std::sort(sorted_vec.begin(), sorted_vec.end());
    auto two_lines = sorted_vec[0] + sorted_vec[1];
    auto long_line = sorted_vec[2];
    return two_lines > long_line ? 1 : 2;
}