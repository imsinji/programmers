#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    bool is_mul = false;
    if (num_list.size() <= 10) {
        is_mul = true;
    }
    answer = accumulate(
        num_list.cbegin(), num_list.cend(),
        is_mul?1:0,
        [is_mul](int a, int b) {
            return is_mul ? a * b : a + b;
        });
    return answer;
}