#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int odd_num = 0;
    int even_num = 0;
    for (auto n: num_list) {
        if (n%2 == 0) {
            even_num *= 10;
            even_num += n;
        } else {
            odd_num *= 10;
            odd_num += n;
        }
    }
    return odd_num+even_num;
}