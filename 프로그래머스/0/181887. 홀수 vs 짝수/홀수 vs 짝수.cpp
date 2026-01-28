#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int sum1 = 0;
    int sum2 = 0;
    for (size_t i = 0; i < num_list.size(); i+=2) {
        sum1 += num_list[i];
    }
    for (size_t i = 1; i < num_list.size(); i+=2) {
        sum2 += num_list[i];
    }
    return max(sum1, sum2);
}