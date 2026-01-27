#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b) {
    auto r1_s = to_string(a)+to_string(b);
    int r1 = stoi(r1_s);
    int r2 = 2*a*b;
    return max(r1, r2);
}