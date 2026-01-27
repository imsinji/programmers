#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int total_sum = 0;
    for (auto s: number) {
        total_sum += s - '0';
    }
    return total_sum%9;
}