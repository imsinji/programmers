#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int sum_even = 0;
    int sum_odd = 0;
    for (size_t i = 0; i < num_list.size(); i++) {
        if (i & 1)
            sum_odd += num_list[i];
        else
            sum_even += num_list[i];
    }
    return max(sum_even, sum_odd);
}