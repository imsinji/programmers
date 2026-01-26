#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int even_count = std::accumulate(num_list.cbegin(), num_list.cend(), 0, [](int a, int b) { return a + (b%2 == 0 ? 1 : 0); });
    int odd_count = num_list.size()-even_count;
    return {even_count, odd_count};
}