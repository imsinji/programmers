#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int a = 1;
    int b = 0;
    for (auto n: num_list) {
        a *= n;
        b += n;
    }
    return a < pow(b,2) ? 1 : 0;
}