#include <string>
#include <vector>
#include <numeric>
#include <map>

using namespace std;

int solution(int n, string control) {
    std::map<char, int> m = {{'w', 1}, {'s', -1}, {'d', 10}, {'a', -10}};
    int answer = accumulate(
        control.cbegin(), control.cend(), n,
        [&m](int a, char b) { return a+m[b]; }
    );
    return answer;
}