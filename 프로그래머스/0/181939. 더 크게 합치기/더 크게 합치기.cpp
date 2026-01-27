#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
    int sol1 = stoi(to_string(a)+to_string(b));
    int sol2 = stoi(to_string(b)+to_string(a));
    return max(sol1, sol2);
}